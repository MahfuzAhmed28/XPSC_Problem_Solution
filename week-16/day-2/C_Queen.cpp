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

    int n,root;
    cin>>n;
    vector<int> g[n+1],bad(n+1,0),a(n+1);
    for(int i=1;i<=n;i++)
    {
        int p,c;
        cin>>p>>c;
        int u=p,v=i;
        if(u!=-1)
        {
            g[u].push_back(v);
        }
        else
        {
            root=u;
        }
        if(c==1)
        {
            a[v]=1;
            bad[u]++;
        }
    }
    vector<int> ans;
    for(int i=1;i<=n;i++)
    {
        if(i==root)
        {
            continue;
        }
        if(g[i].size()==bad[i] && a[i]==1)
        {
            ans.push_back(i);
        }
    }
    if(ans.size()==0)
    {
        cout<<-1<<'\n';
    }
    else
    {
        for(int val:ans)
        {
            cout<<val<<" ";
        }
    }
    return 0;
}