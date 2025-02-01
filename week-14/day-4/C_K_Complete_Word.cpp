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
        int n,k;
        cin>>n>>k;
        int ans=0;
        string s;
        cin>>s;
        for(int i=0;i<(k+1)/2;i++)
        {
            map<char,int> mp;
            int tot=0;
            int mx=0;
            for(int j=i;j<n;j+=k)
            {
                mp[s[j]]++;
                if(j==j+k-1-2*i)
                {
                    tot++;
                    mx=max(mx,mp[s[j]]);
                }
                else
                {
                    tot+=2;
                    mp[s[j+k-1-2*i]]++;
                    mx=max(mx,mp[s[j]]);
                    mx=max(mx,mp[s[j+k-1-2*i]]);

                }
            }
            ans+=(tot-mx);
        }
        cout<<ans<<'\n';
    }
    return 0;
}