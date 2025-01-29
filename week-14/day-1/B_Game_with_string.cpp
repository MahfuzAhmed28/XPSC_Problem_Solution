#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    stack<char> st;
    int ans=0;
    for(char c:s)
    {
        if(st.empty())
        {
            st.push(c);
        }
        else
        {
            if(st.top()==c)
            {
                ans++;
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        
    }
    if(ans%2==0)
    {
        cout<<"No\n";
    }
    else
    {
        cout<<"Yes\n";
    }
    return 0;
}