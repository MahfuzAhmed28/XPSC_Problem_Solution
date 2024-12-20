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
        char arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int j=0;j<m;j++)
        {
            deque<int> dq;
            for(int i=n-1;i>=0;i--)
            {
                if(arr[i][j]=='*')
                {
                    if(dq.size()!=0)
                    {
                        arr[dq.front()][j]='*';
                        arr[i][j]='.';
                        dq.pop_front();
                        dq.push_back(i);
                    }
                }
                else if(arr[i][j]=='.')
                {
                    dq.push_back(i);
                }
                else
                {
                    dq.clear();
                }
            }
        }
        //
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<arr[i][j];
            }
            cout<<'\n';
        }
        cout<<'\n';
    }
    return 0;
}
