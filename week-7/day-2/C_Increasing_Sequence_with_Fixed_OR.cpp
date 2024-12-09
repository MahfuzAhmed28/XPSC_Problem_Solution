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
        vector<ll> v;
        v.push_back(n);
        for(int k=0;k<=__lg(n);k++)
        {
            if((n>>k)&1)
            {
                if(n-(1LL << k)>0)
                {
                    v.push_back(n-(1LL << k));
                }
                
            }
        }
        reverse(v.begin(),v.end());
        cout<<v.size()<<'\n';
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}