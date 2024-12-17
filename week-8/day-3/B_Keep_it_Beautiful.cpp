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
        int n,x,first,c=0;
        string ans="";
        cin>>n;
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(c==1)
            {
                if(x>=st.top() && x<=first)
                {
                    ans+='1';
                    st.push(x);
                }
                else
                {
                    ans+='0';
                }
            }
            if(i==0)
            {
                st.push(x);
                ans+='1';
                first=x;
            }
            if(i>0 && c==0 && st.top()<=x)
            {
                ans+='1';
                st.push(x);
            }
            else if(i>0 && c==0 && st.top()>x)
            {
                if(x<=first)
                {
                    c=1;
                    ans+='1';
                    st.push(x);
                }
                else
                {
                    ans+='0';
                }
                
            }
              
        }
        cout<<ans<<endl;
    }
    return 0;
}