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
        vector<ll> v,v1;
        map<int,int> mp;
        int mx=-1;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(mp[x]==0)
            {
                v.push_back(x);
                mp[x]++;
                mx=max(mx,mp[x]);
            }
            else
            {
                mp[x]++;
                mx=max(mx,mp[x]);
            }
        }
        if(v.size()==0)
        {
            cout<<n<<'\n';
        }
        else
        {
            sort(v.begin(),v.end());
            int ans=mp[v[0]];
            for(int i=0;i<v.size()-1;i++)
            {
                if(abs(v[i]-v[i+1])==1)
                {
                    if(mp[v[i]]<mp[v[i+1]])
                    {
                        ans+=(mp[v[i+1]]-mp[v[i]]);
                    }
                    
                }
                else
                {
                    ans+=mp[v[i+1]];
                }
            }
            cout<<ans<<'\n';
        }
        
        
        
    }
    return 0;
}
