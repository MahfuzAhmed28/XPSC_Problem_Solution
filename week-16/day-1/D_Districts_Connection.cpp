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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int city=-1;
        bool ok=false;
        for(int i=1;i<n;i++)
        {
            if(v[0]!=v[i])
            {
                ok=true;
                city=i;
                break;
            }
        }
        if(ok)
        {
            cout<<"YES\n";
            for(int i=1;i<n;i++)
            {
                if(v[0]!=v[i])
                {
                    cout<<1<<" "<<i+1<<'\n';
                }
                else
                {
                    cout<<city+1<<" "<<i+1<<'\n';
                }
            }
        }
        else
        {
            cout<<"NO\n";
        }
        
    }
    return 0;
}