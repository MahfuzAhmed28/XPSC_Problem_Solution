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
        int n;
        cin>>n;
        vector<ll> v(n),preff;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(i==0)
            {
                preff.push_back(v[i]);
            }
            else
            {
                ll x=preff.back()+v[i];
                preff.push_back(x);
            }
        }
        string s;
        cin>>s;
        int i=0,j=n-1;
        ll ans=0;
        while(i<j)
        {
            if(s[i]=='L' && s[j]=='R')
            {
                if(i==0)
                {
                    ans+=preff[j];
                    s[i]='.';
                    s[j]='.';
                }
                else
                {
                    ll k=preff[j]-preff[i-1];
                    s[i]='.';
                    s[j]='.';
                    ans+=k;
                }
                
            }
            if(s[i]=='.' || s[i]=='R')
            {
                i++;
            }
            if(s[j]=='.' || s[j]=='L')
            {
                j--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}