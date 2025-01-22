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
        int k,n,m;
        cin>>k>>n>>m;
        vector<int> a(n),b(m),ans;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        int i=0,j=0;
        bool f=true;
        while(i<n || j<m)
        {
            int sz=ans.size();
            while(i<n &&(a[i]==0 || a[i]<=k))
            {
                if(a[i]==0)
                {
                    k++;
                }
                
                ans.push_back(a[i]);
                i++;
            }
            while(j<m &&(b[j]==0 || b[j]<=k))
            {
                if(b[j]==0)
                {
                    k++;
                }
                
                ans.push_back(b[j]);
                j++;
            }
            if(sz==ans.size())
            {
                break;
            }
        }
        if(ans.size()!=(n+m))
        {
            cout<<-1<<'\n';
        }
        else
        {
            for(int val:ans)
            {
                cout<<val<<" ";
            }
            cout<<'\n';
        }
    }
    return 0;
}