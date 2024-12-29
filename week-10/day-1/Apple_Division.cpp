#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<ll> v(n);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    ll ans=INF,sum1=0;;
    ll x=(1LL<<n);
    for(int i=0;i<x;i++)
    {
        sum1=0;
        for(int k=0;k<n;k++)
        {
            if((i>>k)&1)
            {
                sum1+=v[k];
            }
        }
        ll m=sum-sum1;
        ans=min(ans,abs(m-sum1));
    }
    
    
        
    cout<<ans<<'\n';
    return 0;
}