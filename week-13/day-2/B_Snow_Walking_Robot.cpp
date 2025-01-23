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
        int n=s.size();
        int l=0,r=0,u=0,d=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                l++;
            }
            else if(s[i]=='R'){
                r++;
            }
            else if(s[i]=='U'){
                u++;
            }
            else if(s[i]=='D'){
                d++;
            }
        }
        int x=min(l,r);
        int y=min(u,d);
        string ans="";
        if(y==0)
        {
            if(x!=0)
            {
                cout<<2<<'\n'<<"LR\n";
            }
            else
            {
                cout<<0<<'\n';
                cout<<'\n';
            }
         
        }
        else if(x==0)
        {
            if(y!=0)
            {
                cout<<2<<'\n'<<"DU\n";
            }
            else
            {
                cout<<0<<'\n';
                cout<<'\n';
            }
        }
        else
        {
            for(int i=0;i<x;i++)
            {
                ans+='L';
            }
            for(int i=0;i<y;i++)
            {
                ans+='U';
            }
            for(int i=0;i<x;i++)
            {
                ans+='R';
            }
            for(int i=0;i<y;i++)
            {
                ans+='D';
            }
            if(ans.size()==0)
            {
                cout<<0<<'\n';
                cout<<'\n';
            }
            else
            {
                cout<<ans.size()<<'\n'<<ans<<'\n';
            }
        }
        
        
    }
    return 0;
}