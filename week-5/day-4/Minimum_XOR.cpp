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
        int sum=0;
        for(int i=0;i<n;i++)
        {
            
            cin>>v[i];
            sum=(sum^v[i]);

        }
        
        int ans=sum;
        for(int i=0;i<n;i++)
        {
            ans=min(ans,sum^v[i]);
            //cout<<ans<<'\n';
        }
        cout<<ans<<'\n';
    }
    return 0;
}