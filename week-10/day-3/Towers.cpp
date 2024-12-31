#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<ll> v(n);
    
    multiset<ll> st;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(st.size()==0)
        {
            st.insert(v[i]);
        }
        else
        {
            auto it=st.upper_bound(v[i]);
            if(it!=st.end())
            {
                ll val=*it;
                int cnt=st.count(val);
                st.erase(val);
                cnt--;
                while(cnt--)
                {
                    st.insert(val);
                }
                st.insert(v[i]);
            }
            else
            {
                st.insert(v[i]);
            }
        }
    }
    cout<<st.size()<<'\n';
    return 0;
}