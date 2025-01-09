#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    vector<int> recip(3,0);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='B')
        {
            recip[0]++;
        } 
        else if(s[i]=='S')
        {
            recip[1]++;
        }
        else
        {
            recip[2]++;
        }
    }
    vector<int> kitchen(3),cost(3);
    for(int i=0;i<3;i++)
    {
        cin>>kitchen[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>cost[i];
    }
    ll money;
    cin>>money;
    auto ok=[&](ll mid){
        ll cnt=0;
        for(int i=0;i<3;i++)
        {
            ll req=recip[i]*mid;
            ll rem=req-kitchen[i];
            if(rem>0)
            {
                cnt+=(rem*cost[i]);
            }
        }
        return cnt<=money;
    };
    ll l=0,r=1e14,mid,ans=0;
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