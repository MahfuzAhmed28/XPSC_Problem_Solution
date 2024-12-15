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
        string s;
        cin>>s;
        int cnt=0;
        stack<char> st;
        string ans="Ramos";
        for(char c:s)
        {
            if(st.empty())
            {
                st.push(c);
            }
            else
            {
                if(st.top()!=c)
                {
                    if(ans=="Ramos")
                    {
                        ans="Zlatan";
                    }
                    else
                    {
                        ans="Ramos";
                    }
                }
                else
                {
                    st.push(c);
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}