#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
 vector<int> allPrime={2,3,5,7,11,13,17,19,23,29,31};

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
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<11;j++)
            {
                if(v[i]%allPrime[j]==0)
                {
                    mp[allPrime[j]].push_back(i);
                    break;
                }
            }
        }
        int color=1;
        cout<<mp.size()<<'\n';
        vector<int> ans(n);
        for(auto [x,y]:mp)
        {
            for(auto val:y)
            {
                ans[val]=color;
            }
            color++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
