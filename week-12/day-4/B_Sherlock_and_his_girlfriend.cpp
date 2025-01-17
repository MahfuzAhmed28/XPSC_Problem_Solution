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
    vector<bool> allPrime(n+2,true);
    for(int i=2;i*i<=n+1;i++)
    {
        if(allPrime[i])
        {
            for(int j=i+i;j<=n+1;j+=i)
            {
                allPrime[j]=false;
            }
        }
    }
    vector<int> ans(n+2);
    int a=1,b=2,c=0;
    for(int i=2;i<=n+1;i++)
    {
        if(allPrime[i])
        {
            ans[i]=a;
        }
        else
        {
            int f=0;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0)
                {
                    if(allPrime[i]==true || allPrime[j/i]==true)
                    {
                        f=1;
                        break;
                    }
                }
            }
            if(f==1)
            {
                ans[i]=b;
                c=1;
            }
            else
            {
                ans[i]=a;
            }
        }
    }
    if(c==1)
    {
        cout<<2<<'\n';
    }
    else
    {
        cout<<1<<'\n';
    }
    
    for(int i=2;i<n+2;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}