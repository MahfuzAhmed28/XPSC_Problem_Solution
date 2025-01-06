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
        ll n;
        cin>>n;
        vector<ll> v(n);
        ll sum=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
            if(v[i]==1)
            {
                c++;
            }
        }
        if(sum>=c+n && n>1)
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