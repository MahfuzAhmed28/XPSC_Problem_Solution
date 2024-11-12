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
        string s;
        cin>>s;
        int l=0,r=0;
        int cnt=0,ans=INT_MAX;
        while(r<n)
        {
            if(s[r]=='W')
            {
                cnt++;
            }
            if(r-l+1==k)
            {
                ans=min(ans,cnt);
                
                if(s[l]=='W')
                {
                    cnt--;
                }
                l++;
            }
            r++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}