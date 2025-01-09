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
        vector<ll> v(k);
        for(ll i=0;i<k;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll ans=0;
        ll i=0,j=k;
        while(i<v[j-1])
        {
            i+=(n-v[j-1]);
            ans++;
            v.erase(v.end()-1);
            j--;
            if(j==0 || v.empty())
            {
                break;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}