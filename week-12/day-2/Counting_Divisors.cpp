#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
const int maxN=1e6+1;
vector<int> divisors(maxN);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=1;i<=maxN;i++)
    {
        for(int j=i;j<=maxN;j+=i)
        {
            divisors[j]++;
        }
    }

    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        cout<<divisors[x]<<'\n';
    }
    return 0;
}