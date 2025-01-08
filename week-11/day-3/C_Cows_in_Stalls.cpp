#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    auto ok=[&](int median)
    {
        int cnt=1;
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            while(j<n && v[i]+median>v[j])
            {
                j++;
            }
            if(j==n)
            {
                break;
            }
            cnt++;
            i=j-1;
        }
        return cnt>=k;
    };

    int l=0,r=v[n-1]-v[0],mid,ans=0;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans;
    return 0;
}