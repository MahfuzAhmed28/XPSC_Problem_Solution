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
        string s;
        cin>>s;
        int ans=INT_MAX,req=0;
        for(char c='a';c<='z';c++)
        {
            bool ok=false;
            req=0;
            for(int i=0;i<s.size();i++)
            {
                if(c==s[i])
                {
                    ok=true;
                }
            }
            if(ok==false)
            {
                continue;
            }
            int last=-1;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]==c)
                {
                    int cnt=i-last-1;
                    if(log2(cnt)==(int)log2(cnt))
                    {
                        req=max(req,(int)log2(cnt)+1);
                    }
                    else
                    {
                        req=max(req,(int)ceil(log2(cnt)));
                    }
                    last=i;
                }
            }
            if(s[s.size()-1]!=c)
            {
                int cnt=s.size()-last-1;
                if(log2(cnt)==(int)log2(cnt))
                {
                    req=max(req,(int)log2(cnt)+1);
                }
                else
                {
                    req=max(req,(int)ceil(log2(cnt)));
                }
            }
            ans=min(ans,req);
        }
        
        
        
        cout<<ans<<'\n';

    }
    return 0;
}
