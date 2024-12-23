#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    if(n==2)
    {
        cout<<1<<'\n';
    }
    else if(n%2==0)
    {
        cout<<2<<'\n';
    }
    else
    {
        int f=0;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<1<<'\n';
        }
        else
        {
            f=0;
            n-=2;
            for(int i=2;i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                cout<<2;
            }
            else
            {
                cout<<3;
            }
        }
    }

    return 0;
}