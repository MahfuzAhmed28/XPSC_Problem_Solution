#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
        int n;
        cin>>n;
        vector<int> a(n),b(n),inVA(n),inVB(n);
        pbds<int> p1,p2;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            int x=a[i]-b[i];
            ans+=(p1.order_of_key(x));
            p1.insert(b[i]-a[i]);
        

        }
        
        cout<<ans;
    
    return 0;
}