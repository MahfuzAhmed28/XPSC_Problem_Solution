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
        ll a,b;
        cin>>a>>b;
        while(__gcd(a,b)>1)
        {
            b/=__gcd(a,b);
        }
        if(b>1) cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}