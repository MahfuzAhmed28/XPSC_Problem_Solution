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
        string ans="";
        
        int n=s.size();
        int f=0;
        if (s=="()")
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if((s[i]=='(' && s[i+1]=='(') || (s[i]==')' && s[i+1]==')'))
                {
                    f=1;
                }
            }
            if (f==1)
            {
                for(int i=0;i<n;i++)
                {
                    ans=ans+"()";
                }
            }
            else
            {
                for(int i=0;i<n;i++)
                {
                    ans=ans+'(';
                }
                for(int i=0;i<n;i++)
                {
                    ans=ans+')';
                }
            }
            cout<<"YES"<<endl;
            cout<<ans<<endl;
        }
    }
    return 0;
}