#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    map<ll,vector<ll>> mp;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]].push_back(i+1);

    }
    ll a=-1,b=-1,c=-1;
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            ll sum1=v[i]+v[j];
            ll rem=x-sum1;
            if(mp.find(rem)!=mp.end())
            {
                for(ll val: mp[rem])
                {
                    if(val!=i+1 && val!=j+1)
                    {
                        a=i+1;
                        b=j+1;
                        c=val;
                        break;
                    }
                }
            }
            if(a!=-1)
            {
                break;
            }
        }
        if(a!=-1)
        {
            break;
        }
    }
    if(a==-1)
    {
        cout<<"IMPOSSIBLE";
    }
    else
    {
        cout<<a<<" "<<b<<" "<<c;
    }
    return 0;
}