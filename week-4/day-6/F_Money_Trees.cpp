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
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n),h(n);
        ll l=0,r=0,ans=0,sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=k)
            {
                ans=1;
            }
        }
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
        }

        
        while(r<n-1)
        {
            if(h[r]%h[r+1]==0)
            {
                sum+=a[r];
                while(sum>k && l<=r)
                {
                    sum-=a[l];
                    l++;
                }
                ans=max(ans,r-l+1);
                if(r==n-2)
                {
                    if(sum+a[r+1]<=k)
                    {
                        ans=max(ans,r-l+2);
                    }
                }
            }
            else
            {
                if(r>0)
                {
                    if(h[r-1]%h[r]==0)
                    {
                        sum+=a[r];
                        while(sum>k && l<=r)
                        {
                            sum-=a[l];
                            l++;
                        }
                        ans=max(ans,r-l+1);
                        
                    }
                    
                }
                
                sum=0;
                l=r+1;
                
            }
            r++;
        }
        cout<<ans<<'\n';
        
    }
    return 0;
}