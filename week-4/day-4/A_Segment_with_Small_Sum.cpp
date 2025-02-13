#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int n;
    ll k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int l=0,r=0;
    ll sum=0;
    int cnt=0;
    int ans=0;
    while(l<n && r<n)
    {
        sum+=v[r];
        cnt++;
        if(sum>k)
        {
            while(l<n && sum>k)
            {
                sum-=v[l];
                l++;
                cnt--;
            }
        }
        ans=max(cnt,ans);
        r++;
    }
        
    cout<<ans<<'\n';
    return 0;
}