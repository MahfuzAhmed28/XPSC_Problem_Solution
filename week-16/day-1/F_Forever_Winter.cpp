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

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> a[300],v;
        set<int> st;
        while(m--)
        {
            int u,v;
            cin>>u>>v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        int cnt=0;
        for(auto tem:a)
        {
            if(tem.size()==1)
            {
                st.insert(tem[0]);
                cnt++;
            }
        }
        cout<<st.size()<<" "<<cnt/st.size()<<'\n';
    }
    return 0;
}