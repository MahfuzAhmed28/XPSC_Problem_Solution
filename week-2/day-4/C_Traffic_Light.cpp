#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        int mx=0;
        int i=0,f=0,cnt=0,y=0;
        if(c=='g')
        {
            cout<<0<<endl;
            continue;
        }
        while(i<n)
        {
            if(s[i]==c && f==0)
            {
                f=1;
                cnt=0;
            }
            else if(f==1 && s[i]==c)
            {
                cnt++;
                mx=max(mx,cnt);
            }
            if(f==1 && s[i]!='g' && s[i]!=c)
            {
                cnt++;
                mx=max(mx,cnt);
            }
            if(f==1 && s[i]=='g')
            {
                cnt++;
                mx=max(mx,cnt);
                f=0;
 
            }
            i++;
            if(i==n && y==0)
            {
                i=0;
                y=1;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}