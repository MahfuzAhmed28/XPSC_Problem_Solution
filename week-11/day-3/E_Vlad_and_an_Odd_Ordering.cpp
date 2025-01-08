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
        int n,k;
        cin>>n>>k;
        int ans;
        for(int i=1;i<=log2(n)+1;i++)
        {
            int x=(1<<i);
            int y=(n+(x/2))/x;
            if(k<=y)
            {
                if(k==1)
                {
                    ans=x/2;
                    
                }
                else
                {
                    ans=(x/2)+(k-1)*x;
                }
                break;
            }
            else
            {
                k-=y;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}