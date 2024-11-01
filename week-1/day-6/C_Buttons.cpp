#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;
    int mn=min(a,b);
    int mx=max(a,b);
    int ans=mx;
    mx--;
    if(mx>=mn)
    {
        ans+=mx;
    }
    else
    {
        ans+=mn;
    }
    cout<<ans;

    return 0;
}