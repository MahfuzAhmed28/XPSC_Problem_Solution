#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        string s;
        cin>>s;
        vector<int> like,dislike;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                dislike.push_back(v[i]);
            }
            else
            {
                like.push_back(v[i]);
            }
        }
        sort(like.begin(),like.end());
        sort(dislike.begin(),dislike.end());
        map<int,int> mp;
        int x=n;
        for(int i=like.size()-1;i>=0;i--)
        {
            mp[like[i]]=x;
            x--;
        }
        for(int i=dislike.size()-1;i>=0;i--)
        {
            mp[dislike[i]]=x;
            x--;
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(mp[v[i]]);
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}