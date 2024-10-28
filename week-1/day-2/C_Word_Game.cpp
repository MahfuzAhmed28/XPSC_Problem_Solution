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
        map<string,vector<int>> mp;
        for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=n;j++)
            {
                string s;
                cin>>s;
                mp[s].push_back(i);
            }
        }
        vector<int> ans(4);
        for(auto [x,y]:mp)
        {
            if(y.size()==1)
            {
                ans[y[0]]+=3;
            }
            else if(y.size()==2)
            {
                ans[y[0]]++;
                ans[y[1]]++;
            }
        }
        for(int i=1;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}