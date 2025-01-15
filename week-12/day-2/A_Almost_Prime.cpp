#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<bool> v(3001,true);
    for(int i=2;i<=3000;i++)
    {
        if(v[i]==true)
        {
            for(int j=i+i;j<=3000;j+=i)
            {
                v[j]=false;
            }
        }
    }
    int n;
    cin>>n;
    int cnt=0,ans=0;
    for(int i=1;i<=n;i++)
    {
        cnt=0;
        for(int j=2;j<=n;j++)
        {
            if(v[j]==true && i>=j && i%j==0)
            {
                cnt++;
            }
        }
        if(cnt==2)
        {
            ans++;
        }

    }
    cout<<ans;
    return 0;
}