#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> v(n);
        int mx=0,num,ans=0,num1;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            v[i]=vector<int>(n-1);
            for(int j=0;j<n-1;j++)
            {
                cin>>v[i][j];
                mp[v[i][j]]=0;
            }
        }
        vector<int> res;
        for(int j=0;j<1;j++)
        {
 
            for(int i=0;i<n;i++)
            {
                mp[v[i][j]]++;
                if(ans<mp[v[i][j]])
                {
                    num=v[i][j];
                    ans=mp[v[i][j]];
                }
            }
        }
        res.push_back(num);
        int c=0,e=0;
        ans=0;
        for(int j=0;j<n-1;j++)
        {
            
            for(int i=0;i<n;i++)
            {
                if(v[i][j]!=res.back())
                {
                    num=v[i][j];
                    break;
                }
            }
            res.push_back(num);
        }
        for(int val: res)
        {
            cout<<val<<" ";
        }
        cout<<endl;
 
 
    }
    return 0;
}