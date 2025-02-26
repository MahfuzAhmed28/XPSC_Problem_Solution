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
        int c=0;
        for(int i=n-2;i>=0;i--)
        {
            if(v[i]>v[i+1])
            {
                double x=log2(i+1);
                if(x!=(int)x)
                {
                    c=1;
                }
            }
        }
        if(c==1)
        {
 
            cout<<"NO"<<'\n';
        }
        else
        {
            cout<<"YES"<<'\n';
        }
    }
    return 0;
}