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
        int l,r;
        cin>>l>>r;
        if(r-l>=1)
        {
            if(r%2==0)
            {
                if(r/2!=1)
                {
                    cout<<r/2<<" "<<r/2<<'\n';
                }
                else
                {
                    cout<<-1<<'\n';
                }
            }
            else
            {
                r--;
                if(r/2!=1)
                {
                    cout<<r/2<<" "<<r/2<<'\n';
                }
                else
                {
                    cout<<-1<<'\n';
                }
            }
        }
        else if(r==l)
        {
            if(r%2==0)
            {
                if(r/2!=1)
                {
                    cout<<r/2<<" "<<r/2<<'\n';
                }
                else
                {
                    cout<<-1<<'\n';
                }
            }
            else
            {
                int x=-1;
                for(int i=2;i<=sqrt(r);i++)
                {
                    if(r%i==0)
                    {
                        x=i;
                        break;
                    }
                }
                if(x==-1)
                {
                    cout<<-1<<'\n';
                }
                else
                {
                    cout<<x<<" "<<r-x<<'\n';
                }
            }
        }
        
    }
    return 0;
}