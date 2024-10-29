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
        string s,ans="";
        cin>>s;
        int cntb=0,cntB=0,indxb=-1,indxB=-1;
        
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                if(s[i]=='b')
                {
                    cntb++;
                }
                else
                {
                    if(cntb!=0)
                    {
                        cntb--;
                    }
                    else
                    {
                        ans+=s[i];
                    }
                }
                
            }
            else
            {
                if(s[i]=='B')
                {
                    cntB++;
                }
                else
                {
                    if(cntB!=0)
                    {
                        cntB--;
                    }
                    else
                    {
                        ans+=s[i];
                    }
                }
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<'\n';
        
    }
    return 0;
}