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
        int n;
        cin>>n;
        string s,ans="";
        cin>>s;
        int i=n-1;
        while(i>=0)
        {
            if(s[i]=='0')
            {
                int x=s[i-1]-'0';
                int y=s[i-2]-'0';
                y*=10;
                y+=x;
                char c=(y-1)+'a';
                ans+=c;
                i-=3;
            }
            else
            {
                int x=s[i]-'0';
                char c=(x-1)+'a';
                ans+=c;
                i--;
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
    return 0;
}