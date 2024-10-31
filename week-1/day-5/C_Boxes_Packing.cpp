#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    map<int,int> mp;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
        ans=max(mp[x],ans);
    }
    
    cout<<ans;
    return 0;
}