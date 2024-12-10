#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a;
    cin>>n;
    int digits=0;
    a=n;
    while(a!=0)
    {
        digits++;
        a/=10;
    }
    int indx=0;
    for(int i=1;i<digits;i++)
    {
        indx+=(1<<i);
    }
    vector<int> v;
    for(int i=0;i<(1<<digits);i++)
    {
        int res=0;
        for(k=0;k<digits;k++)
        {
            if((i>>k)&1)
            {
                res*=10;
                res+=7;
            }
            else
            {
                res*=10;
                res+=4;
            }
        }
        v.push_back(res);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==n)
        {
            indx+=(i+1);
            break;
        }
    }
    cout<<indx;

    return 0;
}