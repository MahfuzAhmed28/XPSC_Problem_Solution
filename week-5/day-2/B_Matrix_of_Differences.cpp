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
    while(t--)
    {
        int n;
        cin>>n;
        int prev=1,sum=(n*n)-1;
        vector<int> v;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 && j==0)
                {
                    v.push_back(prev);
                    mp[prev]=1;
                    continue;
                }
                if(prev-sum<0)
                {
                    prev+=sum;
                    sum--;
                    v.push_back(prev);
                    mp[prev]=1;
                }
                else
                {
                    if(mp[prev-sum]==0)
                    {
                        prev-=sum;
                        sum--;
                        v.push_back(prev);
                        mp[prev]=1;
                    }
                    else
                    {
                        prev+=sum;
                        sum--;
                        v.push_back(prev);
                        mp[prev]=1;
                    }
                    
                }
            }
            if(i%2!=0)
            {
                reverse(v.begin(),v.end());
            }
            for(int val:v)
            {
                cout<<val<<" ";
            }
            v.clear();
            cout<<'\n';
        }
        
    }
    return 0;
}