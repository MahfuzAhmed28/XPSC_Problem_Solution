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
        int ans1=0,ans2=0;
        char c1,c2;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                c1=s[i];
                c2=s[i];
                if(s[i]=='1')
                {
                    ans1++;
                }
                if(s[i]=='0')
                {
                    ans2++;
                }
            }
            else
            {
                if(s[i]=='1' && c1=='0')
                {
                    ans1++;
                    
                }
                if(s[i]=='0' && c2=='1')
                {
                    ans2++;
                    
                }
                c1=s[i];
                c2=s[i];
            }
        }
        cout<<min(ans1,ans2)<<'\n';

    }
    return 0;
}