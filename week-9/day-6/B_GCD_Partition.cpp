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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
          
        ll ans=0;
        ll sum1=0;
        for(int i=0;i<n-1;i++)
        {
            sum1+=v[i];
            sum-=v[i];
            ans=max(ans,__gcd(sum1,sum));
        }
        cout<<ans<<'\n';
        
    }
    return 0;
}