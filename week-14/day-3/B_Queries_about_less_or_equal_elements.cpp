#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    pbds<int> p;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        p.insert(x);
    }
    while(m--)
    {
        int x;
        cin>>x;
        x++;
        cout<<p.order_of_key(x)<<" ";
    }
    return 0;
}