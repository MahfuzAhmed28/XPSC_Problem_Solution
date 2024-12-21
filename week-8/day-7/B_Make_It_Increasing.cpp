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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ans=0,f=0;
        for(int i=n-2;i>=0;i--)
        {
            if(v[i]>=v[i+1])
            {
                while(v[i]>=v[i+1] && v[i]!=0)
                {
                    v[i]/=2;
                    ans++;
                }
            }
 
        }
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>=v[i+1])
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            cout<<-1<<'\n';;
        }
        else
        {
            cout<<ans<<'\n';
        }
    }
    return 0;
}