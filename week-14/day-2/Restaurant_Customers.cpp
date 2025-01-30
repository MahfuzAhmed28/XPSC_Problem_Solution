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
    map<int,int> mp;
    int sum=0,ans=0;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        mp[a]++;
        mp[b+1]--;
    }
    for(auto [x,y]:mp)
    {
        sum+=y;
        ans=max(ans,sum);
    }
    cout<<ans;
    return 0;
}