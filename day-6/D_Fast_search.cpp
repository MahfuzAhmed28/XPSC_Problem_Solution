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
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll q;
    cin>>q;
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        ll l=0,r=n-1;
        ll a=0,b=n-1;
        auto it1=lower_bound(v.begin(),v.end(),x);
        auto it2=upper_bound(v.begin(),v.end(),y);
        int ans=(it2-it1);
        if(ans>=0)
        {
            cout<<ans<<" ";
        }
        else
        {
            cout<<0<<" ";
        }
        
    }
    return 0;
}