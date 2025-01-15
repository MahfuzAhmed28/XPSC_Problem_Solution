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
    if(n%2==0)
    {
        cout<<n/2<<'\n';
        for(int i=0;i<n/2;i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        n-=3;
        cout<<(n/2)+1<<'\n';
        for(int i=0;i<n/2;i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<" ";
    }
    return 0;
}