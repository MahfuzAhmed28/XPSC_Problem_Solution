#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /*vector<bool> prime(1000001,true);
    for(int i=2;i<=1000000;i++)
    {
        if(prime[i])
        {
            for(int j=i+i;j<=1000000;j+=i)
            {
                prime[j]=false;
            }
        }
    }*/



    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        ll y=sqrt(x);
        if(y*y==x)
        {
            bool f=false;
            for(int j=2;j<=sqrt(y);j++)
            {
                if(y%j==0)
                {
                    f=true;
                    break;
                }
            }
            if(y==1)
            {
                f=true;
            }
            if(f==false)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else
        {
            cout<<"NO\n";
        }
    }





    return 0;
}
