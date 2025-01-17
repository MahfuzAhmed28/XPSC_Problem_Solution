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
        vector<int> a(n),frq(n+1,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=n)
            {
                frq[a[i]]++;
            }

        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            int cnt=0;
            for(int j=1;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    cnt+=frq[j];
                    if(j*j!=i)
                    {
                        cnt+=frq[i/j];
                    }
                }
            }
            ans=max(ans,cnt);

        }
        cout<<ans<<'\n';
    }
    return 0;
}
