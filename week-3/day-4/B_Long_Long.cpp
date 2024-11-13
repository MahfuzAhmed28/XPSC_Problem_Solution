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
        vector<ll> v(n);
        ll sum=0;
        int c=0,ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=abs(v[i]);
            if(v[i]<0)
            {
                c=1;
            }
            if(v[i]>0 && c==1)
            {
                ans++;
                c=0;
            }
        }
        if(c==1)
        {
            ans++;
        }
        cout<<sum<<" "<<ans<<'\n';
    }
    return 0;
}