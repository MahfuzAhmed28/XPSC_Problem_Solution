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
        int n;
        cin>>n;
        vector<ll> v(n);
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            ans|=v[i];
        }
        
        cout<<ans<<'\n';
    }
    return 0;
}