#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;

vector<pair<int,int> >ans;
vector<int> tr[100005];
map<pair<int,int>,int> mp;
vector<int> visit(100005);

void dfs(int src,int col)
{
    visit[src]=1;
    for(int child: tr[src])
    {
        if(visit[child]==0)
        {
            int x=min(child,src);
            int y=max(child,src);
            int a;
            if(col==-1 || col==2)
            {
                a=5;
            }
            else
            {
                 a=2;
            }
            col=a;
            mp[{x,y}]=a;
            dfs(child,col);
        }
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
        int cnt=0;
        int l;
        ans.clear();
        mp.clear();
        for(int i=1;i<=n;i++)
        {
            visit[i]=0;
            tr[i].clear();
        }
        for(int i=0;i<n-1;i++)
        {
            int u,v;
            cin>>u>>v;
 
            int x=min(u,v);
            int y=max(u,v);
            ans.push_back({x,y});
 
            tr[u].push_back(v);
            tr[v].push_back(u);
 
            if(tr[u].size()>2)
            {
                cnt=1;
            }
            if(tr[v].size()>2){
                cnt=1;
            }
        }
        if(cnt==1)
        {
            cout<<-1<<'\n';
        }
        else{
            dfs(1,-1);
            for(int i=0;i<ans.size();i++)
            {
                int x=ans[i].first;
                int y=ans[i].second;
                cout<<mp[{x,y}]<<" ";
            }
            cout<<'\n';
        }

    }
    return 0;
}