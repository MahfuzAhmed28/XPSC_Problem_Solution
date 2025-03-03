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
        ll n,sum=0;
        cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        sort(v.begin(),v.end());
        if(n<3)
        {
            cout<<-1<<'\n';
            continue;
        }
        
        ll m=n/2;
        ll l=0,r=1e12,ans=0,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            double temp=(mid+sum)*1.0;
            if(temp/(n*2.0)>v[m])
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<'\n';

    }
    return 0;
}