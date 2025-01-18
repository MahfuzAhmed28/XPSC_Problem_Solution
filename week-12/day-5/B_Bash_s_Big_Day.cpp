#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<pair<int,int>> v;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        for(int j=1;j<=sqrt(x);j++)
        {
            if(x%j==0)
            {
                if(x/j==j)
                {
                    mp[j]++;
                }
                else
                {
                    mp[j]++;
                    mp[x/j]++;
                }
            }
        }
    }
    //cout<<mp.size()<<'\n';
    for(auto [x,y]:mp)
    {
        v.push_back({y,x});
        //cout<<x<<" "<<y<<'\n';
    }
    sort(v.rbegin(),v.rend());
    if(v.size()==1)
    {
        cout<<1;
    }
    else
    {
        cout<<v[1].first;
    }
    return 0;
}
