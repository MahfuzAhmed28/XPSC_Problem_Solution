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
        string s;
        cin>>s;
        int cntB=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                cntB++;
            }
        }
        if(cntB>k)
        {
            cntB-=k;
            int b=0;
            for(char c:s)
            {
                ans++;
                if(c=='B')
                {
                    cntB--;
                }
                if(cntB==0)
                {
                    break;
                }
            }
            cout<<1<<'\n'<<ans<<" A\n";
        }
        else if(cntB<k)
        {
            cntB=k-cntB;
            int b=0;
            for(char c:s)
            {
                ans++;
                if(c=='A')
                {
                    cntB--;
                }
                if(cntB==0)
                {
                    break;
                }
            }
            cout<<1<<'\n'<<ans<<" B\n";
        }
        else
        {
            cout<<"0\n";
        }

    }
    return 0;
}