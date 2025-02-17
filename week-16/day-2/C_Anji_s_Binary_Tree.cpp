#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;
const int maxN=3e5+5;
vector<int> g[maxN],op(maxN);
string s;
void dfs(int node)
{
    if(g[node][0]!=0)
    {
        int v=g[node][0];
        if(s[node-1]!='L')
        {
            op[v]=op[node]+1;
        }
        else
        {
            op[v]=op[node];
        }
        dfs(v);
    }
    if(g[node][1]!=0)
    {
        int v=g[node][1];
        if(s[node-1]!='R')
        {
            op[v]=op[node]+1;
        }
        else
        {
            op[v]=op[node];
        }
        dfs(v);
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
        cin>>s;
        for(int i=0;i<=n;i++)
        {
            op[i]=0;
            g[i].clear();
        }
        for(int i=1;i<=n;i++)
        {
            int l,r;
            cin>>l>>r;
            g[i].push_back(l);
            g[i].push_back(r);
        }
        dfs(1);
        int ans=INT_MAX;
        for(int i=1;i<=n;i++)
        {
            if(g[i][0]==0 && g[i][1]==0)
            {
                ans=min(ans,op[i]);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}