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
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll> a(n),b(m);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<ll,ll> mp1,mp2;
        for(ll i=0;i<m;i++)
        {
            cin>>b[i];
            mp1[b[i]]++;
        }
        ll cnt=0;
        for(ll i=0;i<m;i++)
        {
            mp2[a[i]]++;
            if(mp2[a[i]]<=mp1[a[i]])
            {
                cnt++;
            }
        }
        ll ans=0;
        if(cnt>=k)
        {
            ans++;
        }
        for(ll i=m;i<n;i++)
        {
            mp2[a[i]]++;
            if(mp2[a[i]]<=mp1[a[i]])
            {
                cnt++;
            }
            mp2[a[i-m]]--;
            if(mp2[a[i-m]]<mp1[a[i-m]])
            {
                cnt--;
            }
            if(cnt>=k)
            {
                ans++;
            }
        }
        cout<<ans<<'\n';


    }
    return 0;
}