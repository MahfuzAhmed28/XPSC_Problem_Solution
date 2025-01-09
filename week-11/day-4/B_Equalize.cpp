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
        ll n;
        cin>>n;
        vector<ll> v;
        set<ll> st;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            st.insert(x);
        }
        for(ll val:st)
        {
            v.push_back(val);
        }
        ll mx=1;
        for(int i=0;i<v.size();i++)
        {
            ll k=v[i]+n;
            ll it=lower_bound(v.begin(),v.end(),k)-v.begin()-i;
            mx=max(mx,it);
        }
        cout<<mx<<'\n';
    }
    return 0;
}