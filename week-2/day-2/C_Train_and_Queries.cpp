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
        ll n,q;
        cin>>n>>q;
        vector<ll> v(n);
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]].push_back(i);
        }
        while(q--)
        {
            int x,y;
            cin>>x>>y;
            if(mp[x].size()!=0 && mp[y].size()!=0)
            {
                int a=mp[x][0];
                bool check=false;
                int sz=mp[y].size();
                if(a<=mp[y][sz-1]) cout<<"YES\n";
                else cout<<"NO\n";
            }
            else cout<<"NO\n";
        }

    }
    return 0;
}