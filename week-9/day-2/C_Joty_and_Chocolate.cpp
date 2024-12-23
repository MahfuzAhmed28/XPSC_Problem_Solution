#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll ans=0;
    ans=p*(n/a);
    ans+=(q*(n/b));
    ll common=(a*b)/__gcd(a,b);
    ans-=(min(p,q)*(n/common));
    cout<<ans;
    return 0;
}