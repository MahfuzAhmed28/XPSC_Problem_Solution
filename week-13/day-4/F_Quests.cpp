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
        ll n,c,d;
        cin>>n>>c>>d;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        sort(v.rbegin(),v.rend());

        auto ok=[&](ll k)
        {
            ll sum=0,gain=0;
            if(k==0){
                return (v[0]*d)>=c;
            }
            if(k>=n)
            {
                for(ll i=0;i<n;i++)
                {
                    sum+=v[i];
                }
            }
            else
            {
                for(ll i=0;i<k;i++)
                {
                    sum+=v[i];
                }
            }

            ll req=d/k;
            gain=req*sum;
            ll rem=d%k;
            if(rem>=n)
            {
                for(ll i=0;i<n;i++)
                {
                    gain+=v[i];
                }
            }
            else
            {
                for(ll i=0;i<rem;i++)
                {
                    gain+=v[i];
                }
            }
            return gain>=c;
        };
        ll cnt=0;
        for(ll i=0;i<min(n,d);i++)
        {
            cnt+=v[i];
        }
        if(cnt>=c)
        {
            cout<<"Infinity\n";
            continue;
        }

        ll ans=-1,l=0,r=1e12,mid;
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
        if(ans==-1)
        {
            cout<<"Impossible\n";
        }
        else
        {
            cout<<ans-1<<'\n';
        }

    }
    return 0;
}
