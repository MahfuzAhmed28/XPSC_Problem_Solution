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
        vector<int> v(n),money;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            int y;
            cin>>y;
            money.push_back(y-v[i]);
        }
        sort(money.begin(),money.end());
        int i=0,j=n-1,ans=0;
        while(i<j)
        {
            if(money[i]+money[j]>=0)
            {
                ans++;
                i++;
                j--;
            }
            else
            {
                i++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
