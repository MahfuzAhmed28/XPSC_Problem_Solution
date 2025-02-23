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
        int n,k;
        cin>>n>>k;
        int even=0,ans=k;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2==0)
            {
                even++;
            }
            if(x%k==0)
            {
                ans=0;
            }
            ans=min(ans,k-(x%k));
        }
        if(k==4)
        {
            if(even>=2)
            {
                cout<<0<<'\n';
            }
            else if(even==1)
            {
                cout<<min(ans,1)<<'\n';
            }
            else
            {
                cout<<min(ans,2)<<'\n';
            }
        }
        else
        {
            cout<<ans<<'\n';
        }
    }
    return 0;
}