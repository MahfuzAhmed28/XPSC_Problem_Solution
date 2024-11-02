#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<ll> v(n);
    ll sum=0,mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
        if(v[i]%2!=0)
        {
            mn=min(mn,v[i]);
        }
    }
    if(sum%2==0)
    {
        cout<<sum;
    }
    else
    {
        cout<<sum-mn;
    }
    return 0;
}