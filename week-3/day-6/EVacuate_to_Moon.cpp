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
        ll n,m,h;
        cin>>n>>m>>h;
        vector<ll> car(n),outlet(m);
        for(int i=0;i<n;i++)
        {
            cin>>car[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>outlet[i];
        }
        sort(car.rbegin(),car.rend());
        sort(outlet.rbegin(),outlet.rend());
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            if(i<m)
            {
                ans+=min(car[i],outlet[i]*h);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}