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
        int a,b,c;
        cin>>a>>b>>c;
        int x;
        if(b<c)
        {
            x=(c-b)+c;
        }
        else if(b==c)
        {
            x=c;
        }
        else
        {
            x=b;
        }
 
        if(a<x)
        {
            cout<<1<<endl;
        }
        else if(a>x)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<3<<endl;
        }
    }
    return 0;
}