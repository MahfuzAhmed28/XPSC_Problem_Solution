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
    vector<int> v(n);
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            mp[v[i]+v[j]]++;
            ans=max(ans,mp[v[i]+v[j]]);
        }
    }
    cout<<ans<<'\n';
    

    return 0;
}