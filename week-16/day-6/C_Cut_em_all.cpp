#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;
int ans;
const int maxN=1e5+5;
vector<int> tr[maxN];
vector<bool> visit(maxN);
int dfs(int src)
{
    visit[src]=true;
    int a,x=0,f=1;
    for(int child:tr[src])
    {
        if(visit[child]==false)
        {
            f=0;
            a=dfs(child);
            if(a%2==1)
            {
                x+=a;
            }
        }
    }
    if(f==1)
    {
        return 1;
    }
    x++;
    if(x%2==0)
    {
        ans++;
        return 0;
    }
    return x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        tr[i].clear();
        visit[i]=false;
    }
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        tr[u].push_back(v);
        tr[v].push_back(u);
    }
    if(n%2==1)
    {
        cout<<-1<<'\n';
    }
    else
    {
        ans=0;
        dfs(1);
        cout<<ans-1<<'\n';
    }

    return 0;
}
