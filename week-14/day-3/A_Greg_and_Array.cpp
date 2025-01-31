#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> v(n+2);
    for(ll i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    map<ll,vector<ll>> mp;
    ll cnt=1;
    while(cnt<=m)
    {
        ll l,r,d;
        cin>>l>>r>>d;
        mp[cnt].push_back(l);
        mp[cnt].push_back(r);
        mp[cnt].push_back(d);
        cnt++;
    }
    vector<ll> pre(m+2,0),dif(n+2,0);
    while(k--)
    {
        ll x,y;
        cin>>x>>y;
        pre[x]++;
        pre[y+1]--;
    }
    for(ll i=1;i<pre.size();i++)
    {
        pre[i]=pre[i-1]+pre[i];
    }
    for(ll i=1;i<=m;i++)
    {
        if(mp[i].size()>0)
        {
            ll a=pre[i];
            ll l=mp[i][0];
            ll r=mp[i][1];
            ll d=mp[i][2];
            dif[l]+=(d*a);
            dif[r+1]-=(d*a);
        }
    }
    for(ll i=1;i<=dif.size();i++)
    {
        dif[i]=dif[i-1]+dif[i];
    }
    for(ll i=1;i<=n;i++)
    {
        v[i]+=dif[i];
        cout<<v[i]<<" ";
    }


    return 0;
}
