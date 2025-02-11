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
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll mx=0;
        for(int i=1;i<n;i++)
        {
            ll diff=v[i]-v[i-1];
            mx=max(mx,diff);
        }
        mx=max(mx,v[0]);
        mx=max(2*(k-v[n-1]),mx);
        cout<<mx<<'\n';
    }
    return 0;
}