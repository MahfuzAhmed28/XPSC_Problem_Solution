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
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        int x=s/n;
        if(x>a)
        {
            if((n*a)+b>=s)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else
        {
            if(s%n==0)
            {
                cout<<"YES\n";
            }
            else
            {
                if((x*n)+b>=s)
                {
                    cout<<"YES\n";
                }
                else
                {
                    cout<<"NO\n";
                }
            }
        }
    }
    return 0;
}