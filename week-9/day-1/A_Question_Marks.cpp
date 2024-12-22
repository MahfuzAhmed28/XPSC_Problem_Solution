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
        int a=0,b=0,c=0,d=0,q=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            {
                a++;
            } 
            else if(s[i]=='B')
            {
                b++;
            }
            else if(s[i]=='C')
            {
                c++;
            }
            else if(s[i]=='D')
            {
                d++;
            }
            else{
                q++;
            }
        }
        if(a>n)
        {
            q+=(a-n);
        }
        if(b>n)
        {
            q+=(b-n);
        }
        if(c>n)
        {
            q+=(c-n);
        }
        if(d>n)
        {
            q+=(d-n);
        }
        cout<<(n*4)-q<<endl;
    }
    return 0;
}