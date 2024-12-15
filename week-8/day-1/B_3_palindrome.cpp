#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int n;
    cin>>n;
    string ans="";
    char c='a';
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(c=='a')
            {
                c='b';
            }
            else
            {
                c='a';
            }
        }
        ans+=c;
    }
    cout<<ans<<'\n';

    
    return 0;
}