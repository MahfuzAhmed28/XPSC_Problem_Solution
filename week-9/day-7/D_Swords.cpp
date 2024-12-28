#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mx=max(v[i],mx);
    }
    ll gcd=0,sum=0;
    for( auto val:v)
    {
        gcd=__gcd(gcd,mx-val);
        sum+=(mx-val);
    }
    ll ans;
    if(gcd==0)
    {
        ans=0;
    }
    else
    {
        ans=sum/gcd;
    }

    cout<<ans<<" "<<gcd<<'\n';
        
    
    return 0;
}