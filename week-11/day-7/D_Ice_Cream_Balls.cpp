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

        ll l=1,r=1e10,ans=1,mid;

        auto ok=[&](ll val)
        {
            ll x=(val*(val-1))/2;
            if(x<=n)
            {
                ans=max(ans,mid);
                return true;
            }
            else
            {
                return false;
            }
        };
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(ok(mid))
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }

        ll y=(ans*(ans-1))/2;
        cout<<ans+(n-y)<<'\n';
    }
    return 0;
}