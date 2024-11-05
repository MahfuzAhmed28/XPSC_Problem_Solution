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
        priority_queue<int> pq;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x==0)
            {
                if(!pq.empty())
                {
                    ans+=pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(x);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}