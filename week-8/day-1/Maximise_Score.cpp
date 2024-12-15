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
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll ans=INF;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                ll x=abs(v[i]-v[i+1]);
                ans=min(ans,x);
            }
            else if(i==n-1)
            {
                ll x=abs(v[i]-v[i-1]);
                ans=min(ans,x);
            }
            else
            {
                ll x1=abs(v[i]-v[i+1]);
                ll x2=abs(v[i]-v[i-1]);
                if(x1<ans && x2<ans)
                {
                    ans=max(x1,x2);
                }
                
            }
            
        }
        cout<<ans<<'\n';
    }
    return 0;
}