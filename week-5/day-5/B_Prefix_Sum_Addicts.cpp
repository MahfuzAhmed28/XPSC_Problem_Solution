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
        ll n,k;
        cin>>n>>k;
        vector<ll> v(k);
        for(int i=0;i<k;i++)
        {
            cin>>v[i];
        }
        if(k==1)
        {
            cout<<"Yes\n";
            continue;
        }
        vector<ll> ans;
        ll a=v[0],sum=0;
        bool f=true;
        for(int i=k-1;i>0;i--)
        {
            
            ll x=v[i]-v[i-1];
            if(ans.size()>0)
            {
                if(x<=ans.back())
                {
                    ans.push_back(x);
                    sum+=x;
                }
                else
                {
                    f=false;
                    break;
                }
            }
            else
            {
                ans.push_back(x);
                sum+=x;
            }
            
            
        }
        if(f==false)
        {
            cout<<"No\n";
        }
        else
        {
            
                
            k--;
            n-=k;
            sum+=(n*ans.back());
            if(sum>=v.back())
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }
            
        }
    }
    return 0;
}