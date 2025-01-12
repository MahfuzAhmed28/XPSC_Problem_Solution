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
        ll h,n;
        cin>>h>>n;
        vector<ll> a(n),c(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }

        auto ok=[&](ll val)
        {
            ll damage=h;
            for(int i=0;i<n;i++)
            {
                ll atk=((val+c[i]-1)/c[i])*a[i];
                damage-=atk;
                if(damage<=0)
                {
                    return damage<=0;
                }
            }
            return damage<=0;
        };
        ll l=1,r=1e12,ans=0,mid;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(ok(mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}