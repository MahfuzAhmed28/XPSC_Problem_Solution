#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll l,r;
    cin>>l>>r;
    ll n=((r-l)+1)/2;
    cout<<"YES\n";
    while(n)
    {
        r=l+1;
        cout<<l<<" "<<r<<'\n';
        l+=2;
        n--;
    }
    return 0;
}