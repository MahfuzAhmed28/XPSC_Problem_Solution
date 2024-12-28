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
        vector<int> v(n),arr(1001,-1);
        
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            arr[v[i]]=i+1;

        }
        int ans=-1;
        for(int i=1;i<=1000;i++)
        {
            if(arr[i]!=-1)
            {
                for(int j=1;j<=1000;j++)
                {
                    if(arr[j]!=-1 && __gcd(j,i)==1)
                    {
                        ans=max(ans,arr[i]+arr[j]);
                    }
                }
            }
        }
        
        
        cout<<ans<<'\n';
    }
    return 0;
}