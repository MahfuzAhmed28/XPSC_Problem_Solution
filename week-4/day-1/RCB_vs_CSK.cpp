#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    cin>>x>>y;
    if(x>=y+18)
    {
        cout<<"RCB";
    }
    else
    {
        cout<<"CSK";
    }
    return 0;
}