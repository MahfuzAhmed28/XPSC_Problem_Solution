#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,t;
    cin>>s>>t;
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[i])
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}