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
        string s;
        cin>>s;
        stack<char> st1,st0;
        int one=0,zero=0,ans;
        for(char c:s)
        {
            if(c=='0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0' && one>0)
            {
                one--;
            }
            else if(s[i]=='1' && zero>0)
            {
                zero--;
            }
            else
            {
                break;
            }
        }
        ans=one+zero;
        cout<<ans<<'\n';
    }
    return 0;
}