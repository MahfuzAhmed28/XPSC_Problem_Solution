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
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int w=100;
        int ans=0;
        while(w)
        {
            vector<int> temp=v;
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(temp[i]+temp[j]==w && temp[i]!=-1 && temp[j]!=-1)
                    {
                        cnt++;
                        temp[i]=-1;
                        temp[j]=-1;
                    }
                }
            }
            ans=max(cnt,ans);
            w--;
        }
        cout<<ans<<'\n';
    }
    return 0;
}