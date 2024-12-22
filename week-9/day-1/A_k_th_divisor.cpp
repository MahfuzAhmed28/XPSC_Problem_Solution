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
        vector<ll> v;
        for(int i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
                if(i!=n/i)
                {
                    v.push_back(n/i);
                }
                
            }
        }
        sort(v.begin(),v.end());
        if(k>v.size())
        {
            cout<<-1;
        }
        else
        {
            cout<<v[k-1];
        }
    return 0;
}