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
        int x,n,m;
        cin>>x>>n>>m;
        while(n--)
        {
            if(x<=20)
            {
                break;
            }
            x=(x/2)+10;
        }
        if(x<=(m*10))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}