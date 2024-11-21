#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int l=0,r=0,ans=-1,sum=0;
        while(r<n)
        {
            sum+=v[r];
            if(sum==s)
            {
                ans=max(ans,r-l+1);
            }
            while(sum>s)
            {
                sum-=v[l];
                l++;
            }
            if(sum==s)
            {
                ans=max(ans,r-l+1);
            }
            r++;
        }
        if(ans==-1)
        {
            cout<<ans<<'\n';
            continue;
        }
        cout<<n-ans<<'\n';
    }
    return 0;
}