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
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll> v(n);
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]<a)
            {
                ans+=v[i];
            }
            else
            {
                ans+=(a-1);
            }
        }
        
        cout<<ans+b<<'\n';
    }
    return 0;
}