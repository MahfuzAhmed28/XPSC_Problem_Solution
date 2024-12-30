#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n>>x;
    vector<ll> v(n);
    ll ans=0;
    map<ll,ll>mp;
    ll sum=0;
    mp[0]=1;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
        if(mp.find(sum-x)!=mp.end())
        {
            ans+=mp[sum-x];
        }
        mp[sum]++;
    }
    
    
    cout<<ans<<'\n';
    return 0;
}