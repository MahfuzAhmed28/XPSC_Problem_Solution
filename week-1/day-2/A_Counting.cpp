#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;
    if(a<=b)
    {
        cout<<b-a+1;
    }
    else
    {
        cout<<0;
    }
    return 0;
}