#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
        ll x;
        cin>>x;
        vector<ll> v1,v2;
        ll a=INF,b=INF;
        for(ll i=1;i<=sqrt(x);i++)
        {
            if(x%i==0)
            {
                if(i/__gcd(i,x/i)*(x/i)==x)
                {
                    if(max(i,x/i)<max(a,b))
                    {
                        a=i;
                        b=x/i;
                    }
                }
                
            }
        }
        
        cout<<a<<" "<<b;
    
    return 0;
}