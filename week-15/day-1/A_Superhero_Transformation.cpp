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

    string t,s;
    cin>>s>>t;
    int n=min(s.size(),t.size());
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i])
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                if(t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u')
                {
                    t[i]=s[i];
                }
            }
            else
            {
                if(t[i]!='a' && t[i]!='e' && t[i]!='i' && t[i]!='o' && t[i]!='u')
                {
                    t[i]=s[i];
                }
            }
        }
    }
    if(t==s)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

    return 0;
}