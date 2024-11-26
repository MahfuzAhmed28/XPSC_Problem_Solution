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
        ll n;
        cin>>n;
        vector<int> v(n);
        int zero=0,notZero=0,mx=-1;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==0)
            {
                zero++;
            }
            else
            {
                notZero++;
            }
            mx=max(mx,v[i]);
        }
        if(zero==0)
        {
            cout<<0<<'\n';
        }
        else
        {
            if(notZero>=zero-1)
            {
                cout<<0<<'\n';
            }
            else
            {
                if(mx==1)
                {
                    cout<<2<<'\n';
                }
                else
                {
                    cout<<1<<'\n';
                }
            }
        }
    }
    return 0;
}