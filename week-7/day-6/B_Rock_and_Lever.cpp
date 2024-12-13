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
        vector<int> v(n);
        map<ll,ll> mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[__lg(v[i])]++;
        }
        ll ans=0;
        for(auto [x,y]:mp)
        {
            //cout<<y<<'\n';
            if(y>=2)
            {
                y--;
                ans+=((y*(y+1))/2);
            }
        }
        cout<<ans<<'\n';


    }
    return 0;
}
