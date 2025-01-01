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
    while(k--)
    {
        ll val;
        cin>>val;
        ll l=0,r=n-1;
        bool res=false;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            if(v[mid]==val)
            {
                res=true;
                break;
            }
            else if(v[mid]<val)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(res)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}