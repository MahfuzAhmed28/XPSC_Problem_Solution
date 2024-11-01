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
    int cnt=0;
    int num=n;
    while(n!=0)
    {
        n/=10;
        cnt++;

    }
    for(int i=0;i<4-cnt;i++)
    {
        cout<<'0';
    }
    if(cnt!=0)
    {
        cout<<num;
    }
    return 0;
}