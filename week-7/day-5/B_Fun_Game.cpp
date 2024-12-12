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
        string s1,s2;
        cin>>s1>>s2;
        if(s1[0]=='1' || s1==s2)
        {
            cout<<"YES\n";
        }
        else
        {
            int firstOne=-1;
            for(int i=0;i<n;i++)
            {
                if(s1[i]=='1')
                {
                    firstOne=i;
                    break;
                }
            }
            int c=0;
            for(int i=0;i<n;i++)
            {
                if(s1[i]!=s2[i])
                {
                    if((s1[i]=='0' && i<firstOne) || firstOne==-1)
                    {
                        c=1;
                        break;
                    }
                }
            }
            if(c==0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }

        
    }
    return 0;
}