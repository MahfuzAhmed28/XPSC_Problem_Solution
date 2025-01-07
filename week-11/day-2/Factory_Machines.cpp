#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,t;
    cin>>n>>t;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    auto ok=[&](ll time)
    {
        ll cnt=0;
        for(int val:v)
        {
            cnt+=(time/val);
            if(cnt>=t)
            {
                return true;
            }
        }
        return cnt>=t;
    };

    ll l=1,r=1e18,mid,ans;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans<<'\n';
    return 0;
}