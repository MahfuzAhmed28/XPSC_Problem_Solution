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
        ll x,y,k;
        cin>>x>>y>>k;
        while(x>1)
        {
            ll rem=x%y;
            rem=y-rem;
            if(rem<=k)
            {
                x+=rem;
                k-=rem;
            }
            else
            {
                x+=k;
                k=0;
            }
            while(x%y==0)
            {
                x/=y;
            }
            if(k<=0)
            {
                break;
            }
        }
        if(k>0)
        {
            k%=(y-1);
            x+=k;
            while(x%y==0)
            {
                x/=y;
            }
        }
        cout<<x<<'\n';
        
    }
    return 0;
}