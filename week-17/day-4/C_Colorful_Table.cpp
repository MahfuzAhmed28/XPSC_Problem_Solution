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
        vector<pair<int,int>> v;
        vector<int> mx(n+1),mn(n+1);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back({x,i+1});
        }
        sort(v.begin(),v.end());
        int mnn=INT_MAX,mxx=0;
        for(int i=n-1;i>=0;i--)
        {
            mxx=max(mxx,v[i].second);
            mnn=min(mnn,v[i].second);
            mx[i]=mxx;
            mn[i]=mnn;
        }
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[v[i].first]=max(mp[v[i].first],(mx[i]-mn[i]+1)*2);
        }
        for(int i=1;i<=k;i++)
        {
            cout<<mp[i]<<" ";
        }
        cout<<'\n';
        
    }
    return 0;
}