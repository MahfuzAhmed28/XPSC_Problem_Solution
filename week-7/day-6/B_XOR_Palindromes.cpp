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
        string s1,s2="";
        cin>>s1;
        for(int i=0;i<=n;i++)
        {
            s2+='0';
        }
        int i=0,j=n-1;
        int cnt=0;
        while(i<j)
        {
            if(s1[i]!=s1[j])
            {
                cnt++;
            }
            i++;
            j--;
        }
        if(n%2!=0)
        {
            for(int i=cnt;i<s2.size()-cnt;i++)
            {
                s2[i]='1';
            }
        }
        else
        {
            for(int i=cnt;i<s2.size()-cnt;i+=2)
            {
                s2[i]='1';
            }
        }
        cout<<s2<<'\n';

    }
    return 0;
}
