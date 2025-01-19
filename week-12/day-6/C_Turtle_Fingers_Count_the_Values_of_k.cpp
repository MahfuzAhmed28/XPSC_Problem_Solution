#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
ll power(ll n,ll r)
{
    ll cnt=1;
    for(ll i=0;i<r;i++)
    {
        cnt*=n;
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,l;
        cin>>a>>b>>l;

        vector<ll> x,y,z;
        for(ll i=1;i<=sqrt(l);i++)
        {
            if(l%i==0)
            {
                if(l/i==i)
                {
                    x.push_back(i);
                }
                else
                {
                    x.push_back(i);
                    x.push_back(l/i);
                }
            }
        }
        for(ll i=0;i<=20;i++)
        {
            if(power(a,i)<=1e6)
            {
                y.push_back(power(a,i));
            }
            else
            {
                break;
            }
        }
        for(ll i=0;i<=20;i++)
        {
            if(power(b,i)<=1e6)
            {
                z.push_back(power(b,i));
            }
            else
            {
                break;
            }
        }
        ll ans=0;
        for(ll i=0;i<x.size();i++)
        {
            ll c=0;
            for(ll j=0;j<y.size();j++)
            {
                for(ll k=0;k<z.size();k++)
                {
                    if((x[i]*y[j]*z[k])==l)
                    {
                        ans++;
                        c=1;
                        break;
                    }
                }
                if(c==1)
                {
                    break;
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}