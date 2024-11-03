#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]!=x)
        {
            cout<<v[i]<<" ";
        }
    }
    
    return 0;
}