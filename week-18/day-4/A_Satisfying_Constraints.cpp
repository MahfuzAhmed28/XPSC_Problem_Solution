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
        set<int> st;
        int mx=0,mn=INT_MAX;
        while(n--)
        {
            int a,x;
            cin>>a>>x;
            if(a==1)
            {
                mx=max(mx,x);
            }
            else if(a==2)
            {
                mn=min(mn,x);
            }
            else
            {
                st.insert(x);
            }
        }
        if(mn<mx)
        {
            cout<<0<<'\n';
        }
        else
        {
            int ans=mn-mx+1;
            for(auto val:st)
            {
                if(val>=mx && val<=mn)
                {
                    ans--;
                }
            }
            cout<<ans<<'\n';
        }
    }
    return 0;
}