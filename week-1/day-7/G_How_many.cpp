#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s,t;
    cin>>s>>t;
    ll ans=0;
    for(int i=0;i<=s;i++)
    {
        for(int j=0;j<=s;j++)
        {
            for(int k=0;k<=s;k++)
            {
                if((i+j+k)<=s && (i*j*k)<=t)
                {
                    ans++;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}