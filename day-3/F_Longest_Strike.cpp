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
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        ll l=-1, r=-1,ans1=-1,ans2=-1;
        map<ll,int> mp;

        vector<ll> v1;
        set<ll> st;
        for(int i=0;i<n;i++)
        {
            mp[v[i]]++;
            if(mp[v[i]]>=k)
            {
                int sz=st.size();
                st.insert(v[i]);
                if(st.size()>sz)
                {
                    v1.push_back(v[i]);
                }

            }
        }
        if(v1.size()>0)
        {
            sort(v1.begin(),v1.end());
            l=v1[0];
            r=v1[0];
            ans1=l;
            ans2=r;
            for(int i=0;i<v1.size()-1;i++)
            {
                if(v1[i+1]-v1[i]==1)
                {
                    r=v1[i+1];
                    if(r-l>=ans2-ans1)
                    {
                        ans1=l;
                        ans2=r;
                       // cout<<ans1<<" "<<ans2<<'\n';
                    }
                }
                else
                {
                    l=v1[i+1];
                    r=v1[i+1];
                }

            }
        }

        if(ans1==-1 && ans2==-1)
        {
            cout<<ans1<<'\n';
        }
        else
        {
            cout<<ans1<<" "<<ans2<<'\n';
        }
    }
    return 0;
}
