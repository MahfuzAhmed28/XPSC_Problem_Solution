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
        ll n,x,k;
        cin>>n>>x>>k;
        if(x>=k)
        {
            if(n%k==0)
            {
                cout<<n/k<<'\n';
            }
            else
            {
                cout<<(n/k)+1<<'\n';
            }
        }
        else
        {
            if(n%x==0)
            {
                cout<<n/x<<'\n';
            }
            else
            {
                cout<<(n/x)+1<<'\n';
            }
        }
    }
    return 0;
}