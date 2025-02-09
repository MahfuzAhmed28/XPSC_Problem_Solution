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
        int n;
        cin>>n;
        vector<int> v(n+1);
        map<int,ll> mp;
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            v[i]-=(i);
            mp[v[i]]++;
        }
        ll ans=0;
        for(auto [x,y]:mp)
        {
            ans+=((y*(y-1))/2);
        }
        cout<<ans<<'\n';

    }
    return 0;
}