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

        ll l=k,r=n+k-1,ans=3*1e9,mid;
        ll preSum=((k-1)*k)/2;
        ll totalSum=(r*(r+1))/2;
        ll midSum=totalSum-preSum;
        ll halfSum=midSum/2;
        auto ok=[&](ll val)
        {
            ll currSum=(val*(val+1))/2;
            currSum-=preSum;
            ll lastSum=midSum-currSum;
            ans=min(ans,abs(lastSum-currSum));
            if(currSum<=lastSum)
            {
                
                return true;
            }
            return false;


        };

        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(ok(mid))
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
