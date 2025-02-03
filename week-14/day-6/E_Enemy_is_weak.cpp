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


        int n;
        cin>>n;
        vector<int> v(n),invCnt(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        //reverse(v.begin(),v.end());
        pbds<int> p,p1;
        ll ans=0;
        for(int i=n-1;i>=0;i--)
        {
            int x=p.order_of_key(v[i]);
            invCnt[i]=x;
            p.insert(v[i]); 
        }
        for(int i=0;i<n;i++)
        {
            int x=p1.order_of_key(v[i]);
            int sz=p1.size();
            p1.insert(v[i]);
            int big=sz-x;
            ans+=(1LL*big*invCnt[i]);
            p1.insert(v[i]);
        }
        cout<<ans;


    return 0;
}
