#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
const int MOD=1e9+7;
void solve()
{
    int x,n;
    cin>>x>>n;
    int ans=1;
    while(n)
    {
        if(n&1)
        {
            ans=(1LL *ans%MOD *x%MOD)%MOD;
        }
        x=1LL*x*x%MOD;
        n>>=1;
    }
    cout<<ans<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}