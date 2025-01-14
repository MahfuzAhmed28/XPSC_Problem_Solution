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
    vector<int> cnt(0,26);
    vector<string> v,v1,v2,v3;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        string temp=v[i];
        reverse(temp.begin(),temp.end());
        for(int j=0;j<n;j++)
        {
            if(i!=j && temp==v[j] && v[j]!=".." && v[j]!="**")
            {
                v1.push_back(v[i]);
                v2.push_back(v[j]);
                v[i]="**";
                v[j]="..";
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]!="**" && v[i]!="..")
        {
            string temp=v[i];
            reverse(temp.begin(),temp.end());
            if(temp==v[i])
            {
                v3.push_back(v[i]);
            }
        }
    }
    string ans="";
    for(int i=0;i<v1.size();i++)
    {
        ans+=v1[i];
    }
    for(int i=0;i<v3.size();i++)
    {
        ans+=v3[i];
        break;
    }
    for(int i=v2.size()-1;i>=0;i--)
    {
        ans+=v2[i];
    }
    cout<<ans.size()<<'\n';
    cout<<ans;
    return 0;
}
