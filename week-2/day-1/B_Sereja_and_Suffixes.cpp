#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> cnt(n+1,0);
    vector<ll> v(n);
    set<ll> st;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        st.insert(v[i]);
        cnt[i+1]=st.size();
    }
    
    while(m--)
    {
        ll x;
        cin>>x;
        cout<<cnt[x]<<endl;

    }
    return 0;
}