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
    ll ans=0;
    
    map<ll,ll> mp;
    mp[0]=1;
    ll r=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        
        r=((r+v[i])%n+n)%n;
        ans+=mp[r];
        mp[r]++;
    }
    cout<<ans<<'\n';
    return 0;
}