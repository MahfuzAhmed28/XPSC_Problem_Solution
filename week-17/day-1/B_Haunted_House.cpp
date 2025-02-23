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
        vector<ll> ans;
        set<int> idx;
        idx.insert(-1);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                idx.insert(i);
            }
        }
        ll cnt=0,f=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='1' && f==0)
            {
                auto it=idx.lower_bound(i);
                it--;
                if(*it==-1)
                {
                    f=1;
                    ans.push_back(-1);
                }
                else
                {

                    cnt+=(i-*it);
                    ans.push_back(cnt);
                    s[*it]='1';
                    s[i]='0';
                    idx.erase(*it);
                }
            }
            else if(s[i]=='0' && f==0)
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(-1);
            }
        }
        //reverse(ans.begin(),ans.end());
        for(ll val:ans)
        {
            cout<<val<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
