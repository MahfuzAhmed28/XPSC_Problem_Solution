#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        vector<ll> pre;
        pre.push_back(v[0]);
        for(ll i=1;i<n;i++)
        {
            pre.push_back(pre.back()+v[i]);
        }
        while(q--)
        {
            ll key,ans=-1;
            cin>>key;
            auto it=lower_bound(pre.begin(),pre.end(),key);
            if(it!=pre.end()){
                ans=(it-pre.begin())+1;
            }
            cout<<ans<<'\n';
        }
    }
    return 0;
}