#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll k,n;
    cin>>k>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    auto ok=[&](ll median)
    {
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            if(v[i]>median)
            {
                cnt+=median;
            }
            else
            {
                cnt+=v[i];
            }
        }
        return (cnt/median)>=k;
    };

    ll l=0,r=1e17,mid,ans=0;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid))
        {
            l=mid+1;
            ans=mid;
        }
        else
        {
            r=mid-1;
        }
        
    }
    cout<<ans;
    return 0;
}