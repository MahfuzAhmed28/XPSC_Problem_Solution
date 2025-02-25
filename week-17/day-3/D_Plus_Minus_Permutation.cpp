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
        ll n,x,y;
        cin>>n>>x>>y;

        ll cntX=n/x;
        ll cnty=n/y;
        ll cnt=(x*y)/__gcd(x,y);
        ll cntXY=n/cnt;
        cntX-=cntXY;
        cnty-=cntXY;
        ll sum=(n*(n+1))/2;
        ll sumY=(cnty*(cnty+1))/2;
        n-=cntX;
        ll sumX=(n*(n+1))/2;
        sumX=sum-sumX;
        ll ans=sumX-sumY;
        cout<<ans<<'\n';
    }
    return 0;
}
