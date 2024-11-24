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
    string tmp="abcdefghijklmnopqrstuvwxyz";
    while(t--)
    {
        int n;
        cin>>n;
        map<char,int>mp;
        for(int i=0;i<26;i++)
        {
            mp[tmp[i]]=0;
        }
        vector<int> v(n);
        string s="";
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            for(auto it:mp)
            {
                if(it.second==v[i])
                {
                    s+=it.first;
                    mp[it.first]++;
                    break;
                }
            }
        }
        
        cout<<s<<'\n';
    }
    return 0;
}