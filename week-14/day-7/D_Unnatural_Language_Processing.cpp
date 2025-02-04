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
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='a' && s[i]!='e')
            {
                cout<<s[i];
            }
            else
            {
                cout<<s[i];
                if(s[i+1]=='b' || s[i+1]=='c' || s[i+1]=='d')
                {
                    if(s[i+2]!='a' && s[i+2]!='e')
                    {
                        cout<<s[i+1];
                        i+=1;
                    }
                }
                if(i!=n-1)
                {
                    cout<<'.';
                }
            }
        }
        cout<<'\n';
    }
    return 0;
}