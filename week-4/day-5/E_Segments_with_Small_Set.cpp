#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    map<int,int> mp;
    ll l=0,r=0,ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    while(r<n)
    {
        mp[v[r]]++;
        if(mp.size()>k)
        {
            while(mp.size()>k)
            {
                mp[v[l]]--;
                if(mp[v[l]]==0)
                {
                    mp.erase(v[l]);
                }
                l++;
            }
        }
        ans+=(r-l+1);
        r++;
        
    }
    cout<<ans;

    return 0;
}