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
        set<char> st;
        if(s[0]=='s')
        {
            s[0]='.';
        }
        if(s[n-1]=='p')
        {
            s[n-1]='.';
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]!='.')
            {
                st.insert(s[i]);
            }
        }
        if(st.size()<=1)
        {
            cout<<"YES\n";
            
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}