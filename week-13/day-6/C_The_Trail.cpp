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
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        ll arr[n+5][m+5];
        int r=1,c=1;
        s.push_back('D');
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=m;++j)
            {
                cin>>arr[i][j];
            }
        }
        for(char a:s)
        {
            if(a=='D')
            {
                ll sum=0;
                for(int i=1;i<=m;++i)
                {
                    sum+=arr[r][i];
                }
                //cout<<sum<<'\n';
                arr[r][c]-=sum;
                ++r;
            }
            else
            {
                ll sum=0;
                for(int i=1;i<=n;++i)
                {
                    sum+=arr[i][c];
                }
                arr[r][c]-=sum;
                ++c;
            }
        }
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=m;++j)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<'\n';
        }
    }
    return 0;
}
