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
        int x,y;
        cin>>x>>y;
        int ans=ceil(y/2.0);
        int rem=(ans*15)-(y*4);
        if(x<=rem)
        {
            cout<<ans<<endl;
        }
        else
        {
            x=x-rem;
            ans+=ceil(x/15.0);
            cout<<ans<<endl;
        }
    }
    return 0;
}