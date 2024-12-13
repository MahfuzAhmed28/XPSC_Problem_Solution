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
        int n,m;
        cin>>n>>m;
        ll upper=n+m;
        ll lower=max(n-m,0);
        int arr[33];
        for(int i=0;i<33;i++)
        {
            arr[i]=0;
        }
        for(ll i=0;i<33;i++)
        {
            
            
            ll x=(1LL<<i);
            ll y=(lower)/x;
            arr[i]+=((y/2)*x);
            if(y&1LL)
            {
                arr[i]+=((lower)%x);
            }
            
            
        }
        for(int i=0;i<33;i++)
        {
            arr[i]*=-1;
        }
        for(ll i=0;i<33;i++)
        {
            ll x=(1LL<<i);
            ll y=(upper+1)/x;
            arr[i]+=((y/2)*x);
            if(y&1LL)
            {
                arr[i]+=((upper+1)%x);
            }
        }
        int ans=0;
        for(int i=0;i<33;i++)
        {
            if(arr[i]>0)
            {
                ans|=(1LL<<i);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}