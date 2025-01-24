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
        ll sum=0;
        map<ll,ll> mp;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        ll target=(2*sum)/n;
        if((sum-target)*n!=sum*(n-2))
        {
            cout<<0<<'\n';
            continue;
        }
        
        
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=(1*mp[target-v[i]]);
            mp[v[i]]++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
