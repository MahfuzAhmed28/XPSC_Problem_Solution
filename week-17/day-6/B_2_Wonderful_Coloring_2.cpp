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
        int n,k;
        cin>>n>>k;
        map<int,int>mp;
        vector<int>v[n+1];
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
            v[x].push_back(i);
        }
        vector<int> ans(n+1,0);
        vector<pair<int,int>>v1;
        for(auto [x,y]: mp)
        {
            if(y>=k)
            {
                int color=1;
                for(int i=0;i<k;i++)
                {
                    int z = v[x][i];
                    ans[z]=color;
                    color++;
                }
            }
            else{
                for(int i=0;i<v[x].size();i++)
                {
                    v1.push_back({x,v[x][i]});
                }
            }
        }
        int color=1;
        int z=(v1.size()%k);
        for(int i=0;i<v1.size()-z;i++)
        {
            int ind=v1[i].second;
            ans[ind]=color;
            color++;
            if(color>k)
            {
                color=1;
            }
        }
        ans.pop_back();
        for(auto val: ans)
        {
            cout<<val<<" ";
        }
        cout<<'\n';
    }
    return 0;
}