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
        ll n,c;
        cin>>n>>c;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            v[i]+=(i+1);
        }
        sort(v.begin(),v.end());
        int ans=0;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            if(sum+v[i]<=c)
            {
                ans++;
                sum+=v[i];
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}