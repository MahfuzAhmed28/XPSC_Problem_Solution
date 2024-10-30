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
    vector<int>v;
    vector<string> ans;
    map<string,int> mp;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        ans.push_back(s);
        mp[s]=i;
    }
    for(auto it:mp)
    {
        v.push_back(it.second);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<v.size();i++)
    {
        cout<<ans[v[i]]<<'\n';
    }

    return 0;
}
