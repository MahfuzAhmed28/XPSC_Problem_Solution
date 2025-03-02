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
        vector<ll> v(n+1),l_to_r(n+1,0),r_to_l(n+1,0);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        l_to_r[2]=1;
        for(int i=3;i<=n;i++)
        {

            if(v[i]-v[i-1]<v[i-1]-v[i-2])
            {
                l_to_r[i]=l_to_r[i-1]+1;
            }
            else
            {
                l_to_r[i]=l_to_r[i-1]+(v[i]-v[i-1]);
            }


        }
        r_to_l[n-1]=1;
        for(int i=n-2;i>=1;i--)
        {

            if(v[i+1]-v[i]<v[i+2]-v[i+1])
            {
                r_to_l[i]=r_to_l[i+1]+1;
            }
            else
            {
                r_to_l[i]=r_to_l[i+1]+(v[i+1]-v[i]);
            }


        }
        
        int m;
        cin>>m;
        while(m--)
        {
            int x,y;
            cin>>x>>y;
            ll ans;
            if(x<y)
            {
                ans=l_to_r[y]-l_to_r[x];
            }
            else
            {
                ans=r_to_l[y]-r_to_l[x];
            }
            cout<<ans<<'\n';
        }
    }
    return 0;
}
