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
        int d=0,indx=-1;
        char c='a';
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                indx=i+1;
                break;
            }
        }
        if(indx==-1)
        {
            if(s[0]=='a')
            {
                c++;
                cout<<c<<s;
            }
            else
            {
                cout<<c<<s;
            }
        }
        else
        {
            for(int i=0;i<s.size();i++)
            {
                if(i==indx)
                {
                    if(s[i]==c)
                    {
                        c++;
                    }
                    
                    cout<<c;
                }
                cout<<s[i];
            }
        }
        cout<<'\n';
    }
    return 0;
}