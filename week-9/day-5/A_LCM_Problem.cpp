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
        ll l,r;
        cin>>l>>r;

        if(l*2<=r)
        {
            cout<<l<<" "<<l*2<<'\n';
        }
        else
        {
            cout<<-1<<" "<<-1<<'\n';
        }
    }
    return 0;
}