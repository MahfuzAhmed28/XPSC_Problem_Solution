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
    map<pair<string,string>,int> mp;
    while(n--)
    {
        string s1,s2;
        cin>>s1>>s2;
        mp[{s1,s2}]=1;
    }
    cout<<mp.size()<<'\n';
    return 0;
}
