#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;
const int maxN=4e3+5;
vector<bool> visit(maxN,false);
vector<int> tr[maxN],w(maxN,0),b(maxN,0);

string s;
int ans=0;
void dfs(int curr,int par)
{
    for(int child:tr[curr])
    {
        dfs(child,curr);

    }
    if(par!=-1)
    {
        w[par]+=w[curr];
        b[par]+=b[curr];
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
        for(int i=1;i<maxN;i++)
        {
            tr[i].clear();
            w[i]=0;
            b[i]=0;
        }
        ans=0;

        for(int i=2;i<=n;i++)
        {
            int x;
            cin>>x;
            tr[x].push_back(i);
        }
        cin>>s;
        for(int i=1;i<=n;i++)
        {
            if(s[i-1]=='W') w[i]++;
            else b[i]++;
        }
        dfs(1,-1);
        for(int i=1;i<=n;i++)
        {
            if(w[i]==b[i])
            {
                ans++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
