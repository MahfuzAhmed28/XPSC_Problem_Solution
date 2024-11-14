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
    map<string,int> mp;
    map<int,string> mp1;
    for(int i=1;i<=t;i++)
    {
        string s;
        cin>>s;
        mp[s]=i;
        mp1[i]=s;
    }
    vector<int> v;
    for(auto [x,y]:mp)
    {
        v.push_back(y);
    }
    sort(v.rbegin(),v.rend());
    string ans="";
    for(int i=0;i<v.size();i++)
    {
        string tem=mp1[v[i]];
        int sz=tem.size();
        ans+=tem[sz-2];
        ans+=tem[sz-1];
    }
    cout<<ans;

    return 0;
}