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
        if(n%2!=0)
        {
            cout<<"NO\n";
        }
        else
        {
            string ans="";
            for(int i=0;i<n/2;i++)
            {
                if(i%2==0)
                {
                    ans+="AA";
                }
                else
                {
                    ans+="BB";
                }
            }
            cout<<"YES\n"<<ans<<'\n';
        }
    }
    return 0;
}