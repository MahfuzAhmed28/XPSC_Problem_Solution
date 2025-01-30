#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,q;
    cin>>n>>q;
    vector<ll> v(n+1),dif(n+2,0),pre(n+2);
    for(ll i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        dif[l]++;
        dif[r+1]--;
    }
    for(int i=1;i<=n;i++)
    {
        pre[i]=pre[i-1]+dif[i];
    }
    
    sort(v.rbegin(),v.rend());
    sort(pre.rbegin(),pre.rend());
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(pre[i]*v[i]);
    }
    cout<<sum;

    return 0;
}
