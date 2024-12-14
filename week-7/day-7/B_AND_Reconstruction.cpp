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
        vector<int> v(n),ans;
        
        for(int i=0;i<n-1;i++)
        {
            cin>>v[i];
            if(i>0)
            {
                ans.push_back((v[i]|v[i-1]));
            }
            else
            {
                ans.push_back(v[i]);
            }
        }
        ans.push_back(v[n-2]);
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            if((ans[i]&ans[i+1])!=v[i])
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            for(int val:ans)
            {
                cout<<val<<" ";
            }
            cout<<'\n';
        }
        else
        {
            cout<<-1<<'\n';
        }

    }
    return 0;
}
