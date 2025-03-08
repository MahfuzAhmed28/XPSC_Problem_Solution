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
        ll x,y,k;
        cin>>x>>y>>k;
        int x1=x/k;
        if(x%k!=0)
        {
            x1++;
        }
        int y1=y/k;
        if(y%k!=0)
        {
            y1++;
        }
        if(x1==y1)
        {
            ll ans=x1+y1;
            cout<<ans<<'\n';
        }
        else
        {
            if(x1>y1)
            {
                ll ans=(x1)*2;
                cout<<ans-1<<'\n';
            }
            else
            {
                ll ans=y1*2;
                cout<<ans<<'\n';
            }
        }
    }
    return 0;
}