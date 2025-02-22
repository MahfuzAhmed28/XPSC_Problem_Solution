#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;
const int maxN=1e6+5;
vector<int> tr[maxN];
vector<ll> leaf;
void dfs(int src,int par)
{
    int f=0;
    for(int child:tr[src])
    {
        if(child!=par)
        {
            f=1;
            dfs(child,src);
            leaf[src]+=leaf[child];
        }
    }
    if(f==0)
    {
        leaf[src]=1;
    }
}
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
        for(int i=0;i<=n;i++)
        {
            tr[i].clear();
        }
        for(int i=0;i<n-1;i++)
        {
            int u,v;
            cin>>u>>v;
            tr[u].push_back(v);
            tr[v].push_back(u);
        }
        leaf.assign(n+2,0);
        dfs(1,-1);
        int q;
        cin>>q;
        while(q--)
        {
            int a,b;
            cin>>a>>b;
            ll ans=leaf[a]*leaf[b];
            cout<<ans<<'\n';
        }
    }
    return 0;
}