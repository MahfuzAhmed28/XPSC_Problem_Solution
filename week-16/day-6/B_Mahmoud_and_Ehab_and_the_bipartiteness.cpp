#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;
const int maxN=1e5+5;
int s1,s2;
vector<int> tr[maxN];
void dfs(int src,int p,int v1)
{
    s1+=(v1%2==0);
    s2+=(v1%2==1);
    for(int child:tr[src])
    {
        if(child!=p)
        {
            dfs(child,src,v1+1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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
        u--;
        v--;
        tr[u].push_back(v);
        swap(u,v);
        tr[u].push_back(v);
    }
    dfs(0,-1,0);
    cout<<(1LL*s1*s2)-(n-1);
    return 0;
}