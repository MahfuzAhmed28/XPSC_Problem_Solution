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
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans=0,cost=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                ans+=a[i]-a[i+1];
                cost=max(cost,a[i]-a[i+1]);
                a[i+1]=a[i];
                
            }
        }
        cout<<cost+ans<<'\n';
    }
    return 0;
}