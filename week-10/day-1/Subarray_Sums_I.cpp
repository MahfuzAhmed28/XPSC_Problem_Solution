#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll x;
    cin>>n>>x;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int l=0,r=0,ans=0;
    ll sum=0;
    while(r<n)
    {
        sum+=v[r];
        if(sum>=x)
        {
            while(sum>=x)
            {
                if(sum==x)
                {
                    ans++;
                }
                sum-=v[l];
                l++;
            }
        }
        r++;
        
    }
 
    cout<<ans<<'\n';
    return 0;
}