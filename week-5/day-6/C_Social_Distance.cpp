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
        int indxi=-1,cnt=0,ans=0,f=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(indxi==-1)
                {
                    indxi=i;
                    ans++;
                    f=1;
                }
                else
                {
                    cnt++;
                }
                if(cnt>k)
                {
                    ans++;
                    cnt=0;
                    f=1;
                }
            }
            else
            {
                indxi=i;
                if(cnt<k)
                {
                    if(f==1)
                    {
                        ans--;
                    }
                }
                f=0;
                cnt=0;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}