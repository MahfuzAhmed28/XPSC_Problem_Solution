#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    multiset<ll> st;
    ll l=0,r=0,ans=0;
    while(r<n)
    {
        st.insert(v[r]);
        ll x=*st.begin();
        ll y=*st.rbegin();
        while(y-x>k)
        {
            ll cnt=st.count(v[l]);
            st.erase(v[l]);
            cnt--;
            while(cnt--)
            {
                st.insert(v[l]);
            }
            x=*st.begin();
            y=*st.rbegin();
            l++;
        }

        
        ans+=(r-l+1);
        r++;
    }
    cout<<ans;
    return 0;
}
