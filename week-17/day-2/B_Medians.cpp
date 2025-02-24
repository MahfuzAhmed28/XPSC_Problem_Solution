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
        if((n/2)+1==k)
        {
            cout<<n<<'\n';
            for(int i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
            cout<<'\n';
        }
        else
        {
            if(k==1 || k==n)
            {
                cout<<-1<<'\n';
            }
            else
            {
                cout<<3<<'\n';
                if(k%2==0)
                {
                    cout<<1<<" "<<k<<" "<<k+1<<'\n';
                }
                else
                {
                    cout<<1<<" "<<k-1<<" "<<k+2<<'\n';
                }
                
            }
 
        }
    }
    return 0;
}