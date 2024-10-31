#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    cin>>a>>b>>c;
    int ans=-1;
    for(int i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            ans=i;
            break;
        }
    }
    cout<<ans;
    return 0;
}