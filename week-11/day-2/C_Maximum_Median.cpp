#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    auto ok=[&](ll median){
        ll cnt=0;
        for(ll i=n/2;i<n;i++)
        {
            cnt+=(v[i]<median ? (median-v[i]): 0);
        }
        return cnt<=k;
    };

    sort(v.begin(),v.end());
    ll l=1,r=2e9,ans,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        } 
        else {r=mid-1;}
    }
    cout<<ans;
    return 0;
}