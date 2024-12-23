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
        ll gcd1,gcd2;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(i%2==0)
            {
                if(i==0)
                {
                    gcd1=v[i];
                }
                else
                {
                    gcd1=__gcd(gcd1,v[i]);
                }
            }
            else
            {
                if(i==1)
                {
                    gcd2=v[i];
                }
                else
                {
                    gcd2=__gcd(gcd2,v[i]);
                }
            }
        }
        int f1=0,f2=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(v[i]%gcd2==0)
                {
                    f1=1;
                }
            }
            else
            {
                if(v[i]%gcd1==0)
                {
                    f2=1;
                }
            }
        }
        if(f1==0)
        {
            cout<<gcd2<<'\n';
        }
        else if(f2==0)
        {
            cout<<gcd1<<'\n';
        }
        else
        {
            cout<<0<<'\n';
        }
    }
    return 0;
}