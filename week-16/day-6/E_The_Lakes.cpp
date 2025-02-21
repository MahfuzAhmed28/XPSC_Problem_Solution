#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;
ll arr[1005][1005];
bool visit[1005][1005];

int n,m;
vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}};

bool valid(int si, int sj)
{

    if (si >= 0 && si < n && sj >= 0 && sj < m && arr[si][sj] != 0)
    {
        return true;
    }
    return false;
}
void dfs(int si, int sj,ll &cnt)
{
    visit[si][sj] = true;
    cnt+=arr[si][sj];

    for (int i = 0; i < 4; i++)
    {

        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) && visit[ci][cj] == false)
        {
            dfs(ci, cj,cnt);
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
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
                visit[i][j]=0;
            }
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]!=0 && visit[i][j]==false)
                {
                    ll cnt=0;
                    dfs(i,j,cnt);
                    ans=max(ans,cnt);
                }
            }
        }
        cout<<ans<<'\n';

    }
    return 0;
}
