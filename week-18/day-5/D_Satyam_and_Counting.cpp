#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
        map<ll,ll>mp;
        map<pair<ll,ll>,ll>check;
        ll z=n,up=0;
        set<ll>stx;
        for(int i=0;i<n;i++)
        {
            ll x,y;
            cin>>x>>y;
            check[{x,y}]++;
            stx.insert(x);
            mp[x]++;
        }
        ll ans=0;
        for(int i=0;i<=z;i++)
        {
            if(mp[i]==2)
            {
                ans+=(z-2);
            }
        }
        vector<ll>vx,vy;
        for(auto x:stx)
        {
            vx.push_back(x);
        }
        for(int i=0;i<vx.size()-2;i++)
        {
            ll f=vx[i],s=vx[i+1],th=vx[i+2];
            ll left=(th-f)*(th-f);
            ll right=((s-f)*(s-f)+(th-s)*(th-s)+2);
            if(left==right && check[{f,0}]==1 && check[{s,1}]==1 && check[{th,0}]==1)
            {
                ans++;
            }
        }
        for(int i=0;i<vx.size()-2;i++)
        {
            ll f=vx[i],s=vx[i+1],th=vx[i+2];
            ll left=((th-f)*(th-f));
            ll right=((s-f)*(s-f)+(th-s)*(th-s)+2);
            if(left==right && check[{f,1}]==1 && check[{s,0}]==1 && check[{th,1}]==1)
            {
                ans++;
            }
        }

        cout<<ans<<'\n';
    }
    return 0;
}