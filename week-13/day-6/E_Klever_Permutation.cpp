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
        vector<int> ans(n+2);
        int pos=((n%k)+1)/2;
        int neg=((n%k)-pos);
        int move=n/k;
        int x=1;
        for(int i=1;i<=k;i+=2)
        {
            ans[i]=x;
            x+=move;
            if(pos>0)
            {
                x++;
            }
            pos--;
        }
        x--;
        for(int i=2;i<=k;i+=2)
        {
            
            x+=move;
            if(neg>0)
            {
                x++;
            }
            ans[i]=x;
            neg--;
        }
        for(int i=k+1;i<=n;i++)
        {
            if(i%2==0)
            {
                ans[i]=ans[i-k]-1;
            }
            else
            {
                ans[i]=ans[i-k]+1;
            }
        }
        for(int i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<'\n';

    }
    return 0;
}