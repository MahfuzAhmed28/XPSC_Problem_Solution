#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll l=0,r=0,ans=0,sum=0;
    while(l<n && r<n)
    {
        sum+=v[r];
        if(sum>=k)
        {
            
            while(sum>=k)
            {
                ans+=(n-r);
                sum-=v[l];
                l++;
                
            }
        }
        r++;
    } 
    cout<<ans;
    return 0;
}