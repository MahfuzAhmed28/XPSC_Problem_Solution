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
        ll n,c,q;
        cin>>n>>c>>q;
        string s;
        cin>>s;
        vector<ll> subStr(c);
        vector<pair<ll,ll>> range(c);

        ll sz=n;
        for(int i=0;i<c;i++)
        {
            ll l,r;
            cin>>l>>r;
            subStr[i]=l;
            range[i]={sz+1,sz+(r-l+1)};
            sz=range[i].second;
        }
        while(q--)
        {
            ll k;
            cin>>k;
            if(k<=n)
            {
                cout<<s[k-1]<<'\n';
            }
            else
            {
                for(int i=c-1;i>=0;i--)
                {
                    if(k>=range[i].first && k<=range[i].second)
                    {
                        k=subStr[i]+(k-range[i].first);
                    }
                }
                cout<<s[k-1]<<'\n';
            }
        }
    }
    return 0;
}