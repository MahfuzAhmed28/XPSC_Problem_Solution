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
        vector<int> v(n+1);
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        for(int i=1;i<=n;i++)
        {
            ans=__gcd(ans,abs(v[i]-i));
        }
        cout<<ans<<endl;
 
    }
    return 0;
}