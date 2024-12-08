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
        ll a,b,c,d;
        cin>>b>>c>>d;
        a=(b|d)-(c&d);
        if((a|b)-(a&c)==d)
        {
            cout<<a<<'\n';
        }
        else
        {
            cout<<-1<<'\n';
        }

    }
    return 0;
}