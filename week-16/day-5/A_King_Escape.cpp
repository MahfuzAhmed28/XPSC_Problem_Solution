#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;
bool visit[1001][1001];
vector<pair<int,int>> d1={{0,1},{0,-1},{-1,0},{1,0},{1,1},{-1,-1},{1,-1},{-1,1}};
int n,m;
bool valid(int i,int j)
{
    if(i<0 || i>=n || j<0 ||j>=m)
    {
        return false;
    }
    return true;
}
void Queen_visit(int si,int sj)
{
    visit[si][sj]=true;
    for(int i=0;i<8;i++)
    {
        int ci=d1[i].first+si;
        int cj=d1[i].second+sj;
        while(valid(ci,cj)==true)
        {
            visit[ci][cj]=true;
            ci=d1[i].first+ci;
            cj=d1[i].second+cj;
 
        }
    }
}
void dfs(int si,int sj)
{
    visit[si][sj]=true;
    for(int i=0;i<8;i++)
    {
        int ci=d1[i].first+si;
        int cj=d1[i].second+sj;
        if(valid(ci,cj)== true && visit[ci][cj]==false)
        {
            dfs(ci,cj);
 
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    m=n;
    int ai,aj,bi,bj,ci,cj;
    cin>>ai>>aj>>bi>>bj>>ci>>cj;
    ai--;
    aj--;
    bi--;
    bj--;
    ci--;
    cj--;
    memset(visit,false,sizeof(visit));
    Queen_visit(ai,aj);
    
    if(visit[bi][bj]==true)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        dfs(ci,cj);
        if(visit[bi][bj]==true)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}