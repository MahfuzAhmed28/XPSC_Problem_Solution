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
    while(t--)
    {
        string s;
        cin>>s;
        if(mp[s]==0)
        {
            cout<<"OK"<<'\n'; 
        }
        else
        {
            cout<<s<<mp[s]<<'\n';
        }
        mp[s]++;
    }
    return 0;
}