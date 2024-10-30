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
    string s;
    map<string,int> mp;
    while(t--)
    {
        cin>>s;
        if(mp[s]==0)
        {
            cout<<"NO\n";
            mp[s]++;
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}