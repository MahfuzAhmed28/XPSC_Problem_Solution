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
        ll n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        ll i,match=0;
        for(i=0;i<n;i++)
        {
            if(c[i]==a[i] || c[i]==b[i])
            {
                match++;
            }
        }
        if (match==n)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}