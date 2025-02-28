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
        int n,ans=0,cnt=0,one=0,one2=0;
        cin>>n;
        string s,f;
        cin>>s>>f;
        if(s==f)
        {
            cout<<"0\n";
        }
        else{
            for(int i=0;i<n;i++)
            {
                if(s[i]=='1')
                {
                    one++;
                }
                if(f[i]=='1')
                {
                    one2++;
                }
                if(s[i]!=f[i] && f[i]=='1')
                {
                    cnt++;
                }
            }
            ans=cnt;
            if(one>one2)
            {
                ans=ans+(one-one2);
            }
            cout<<ans<<'\n';
        }
    }
    return 0;
}