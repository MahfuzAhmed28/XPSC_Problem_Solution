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
    ll mx=0,indx=-1;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(i==0 && v[i]!=0)
        {
            indx=i+1;
            continue;
        }
        if(v[i]>mx && indx==-1)
        {
            if(v[i]-mx!=1)
            {
                indx=i+1;
            }
            mx=max(mx,v[i]);
        }
        
    }
    cout<<indx<<'\n';
    
    return 0;
}