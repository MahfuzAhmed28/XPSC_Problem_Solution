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
        int n,k,q;
        cin>>n>>k>>q;
        ll cnt=0,ans=0;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int l=0,r=0;
        while(r<n)
        {
            if(v[r]<=q)
            {
                cnt++;
                if(cnt>=k)
                {
                    ans++;
                    ans+=(cnt-k);
                }
            }
            else
            {
                cnt=0;
            }
            
            r++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}