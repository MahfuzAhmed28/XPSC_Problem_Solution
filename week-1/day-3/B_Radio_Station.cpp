#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    map<string,string> mp;
    while(n--)
    {
        string s1,s2;
        cin>>s1>>s2;
        s2+=';';
        mp[s2]=s1;
    }
    while(m--)
    {
        string s1,s2;
        cin>>s1>>s2;
        cout<<s1<<" "<<s2<<" #"<<mp[s2]<<'\n';
    }
    return 0;
}
