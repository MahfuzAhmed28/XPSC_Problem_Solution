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

    ll n,k;
    cin>>n>>k;
    ll l=1,r=n,mid,ans=0;

        while(l<=r)
        {
            mid=(l+r)/2;
            //cout<<mid<<" -> "<<(mid*(mid+1))/2<<'\n';
            //cout<<ans<<'\n';
            if(((mid*(mid+1))/2)-k==n-mid)
            {
                ans=mid;
                break;

            }
            else if(((mid*(mid+1))/2)-k<n-mid)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<n-ans;





    return 0;
}
