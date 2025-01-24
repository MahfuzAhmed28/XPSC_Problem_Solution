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
        map<ll,ll> mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
            mp[v[i]]++;
        }
        if(n==1)
        {
            cout<<"YES\n";
            continue;
        }
        bool f=true;
        priority_queue<ll> pq;
        pq.push(sum);
        while(!pq.empty())
        {
            ll w=pq.top();
            pq.pop();
            ll x=w/2;
            ll y=w-x;
            if(mp[x]>0)
            {
                mp[x]--;
            }
            else if(mp[x]==0 && x>1)
            {
                pq.push(x);
            }
            if(mp[y]>0)
            {
                mp[y]--;
            }
            else if(mp[y]==0 && y>1)
            {
                pq.push(y);
            }
            if(pq.size()>n+1)
            {
                f=false;
                break;
            }
        }
        for(auto [x,y]:mp)
        {
            if(y!=0)
            {
                f=false;
                break;
            }
        }
        
        if(f==true)
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
