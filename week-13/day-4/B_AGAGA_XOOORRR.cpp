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
        int xr=0;
        bool f=false;
        for(int i=0;i<n-1;i++)
        {
            xr=(xr^v[i]);
            int c=0;
            int cnt=0;
            for(int j=i+1;j<n;j++)
            {
                if(v[j]==0)
                {
                    continue;
                }
                if(c==xr)
                {
                    c=0;
                    cnt++;
                }
                
                
                c=(c^v[j]);
            }
            if(c==xr || (cnt>0 && c==0))
            {
                f=true;
                break;
            }
        }
        if(f) cout<<"YES\n";
        else cout<<"NO\n";
 
    }
    return 0;
}