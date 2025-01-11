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
        ll n,x;
        cin>>n>>x;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(n==1)
        {
            cout<<x+v[0]<<'\n';
            continue;
        }
        sort(v.begin(),v.end());
        auto ok=[&](ll m)
        {
            ll cnt=0;
            for(ll i=0;i<n;i++)
            {
                if(v[i]<=m)
                {
                    cnt+=abs(m-v[i]);
                }
                else
                {
                    break;
                }
            }
            return cnt<=x;
        };
        ll l=0,r=2*1e9,mid,ans=0;

        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(ok(mid))
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}