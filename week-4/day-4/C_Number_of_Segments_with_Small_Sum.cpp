#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,s;
    cin>>n>>s;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int l=0,r=0;
    ll ans=0,sum=0;
    while(l<n && r<n)
    {
        sum+=v[r];
        if(sum<=s)
        {
            ans+=(r-l+1);
        }
        else
        {
            while(sum>s && l<=r)
            {
                sum-=v[l];
                l++;
            }
            if(sum<=s)
            {
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout<<ans<<'\n';
    return 0;
}