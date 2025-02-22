#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;
const int maxN=1e6+5;
vector<int> a,tr[maxN];
vector<bool> visit(maxN);
int n,m,ans=0;
void dfs(int src,int p)
{
    visit[src]=true;
    bool f=1;
    if(p>m)
    {
        return;
    }
    for(int child:tr[src])
    {
        if(visit[child]==false)
        {
            f=0;
            dfs(child,p*a[child]+a[child]);
        }
    }
    if(f==1)
    {
        ans++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;
    a.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=n;i++)
    {
        tr[i].clear();
        visit[i]=false;
    }
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        tr[u].push_back(v);
        tr[v].push_back(u);
    }
    dfs(0,a[0]);
    cout<<ans;
    return 0;
}