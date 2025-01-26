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
        int n,a=INT_MAX,b=INT_MIN;
        cin>>n;
        vector<int> v(n),ans;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            a=min(a,v[i]);
            b=max(b,v[i]);
        }
        if(v[n-1]==b)
        {
            cout<<b-a<<endl;
        }
        else if(v[0]==a)
        {
            cout<<b-a<<endl;
        }
        else
        {
            
            int x2=b-v[0];
            int y2=v[n-1]-a;
            ans.push_back(x2);
            ans.push_back(y2);
            for(int i=0;i<n-1;i++)
            {
                ans.push_back(v[i]-v[i+1]);
            }
            for(int i=1;i<n;i++)
            {
                ans.push_back(v[i-1]-v[i]);
            }
            int res=INT_MIN;
            for(int i=0;i<ans.size();i++)
            {
                res=max(res,ans[i]);
            }
            cout<<res<<endl;
        }
    }
    return 0;
}