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
        n--;
        string s;
        cin>>s;
        ll ans=0;
        for(int i=0;i<=n;i++)
        {
            if(s[i]=='L')
            {
                ans+=(i-0);
            }
            else
            {
                ans+=(n-i);
            }
        }
        int i=0,j=n;
        vector<ll> v;
        while(i<=j)
        {
            int x=n-i;
            int y=j-0;
            if(x>=y)
            {
                if(s[i]=='L')
                {
                    ll res=ans;
                    res-=(i-0);
                    res+=(n-i);
                    ans=max(ans,res);
                    v.push_back(ans);
                    
                }
                i++;
            }
            else
            {
                if(s[j]=='R')
                {
                    ll res=ans;
                    res-=(n-j);
                    res+=(j-0);
                    ans=max(ans,res);
                    v.push_back(ans);
                }
                j--;
            }
            
            
        }
        int cnt=n+1;
        ll tem=v.back();
        i=0;
        while(cnt--)
        {
            if(i<v.size())
            {
                cout<<v[i]<<" ";
                i++;
            }
            else
            {
                cout<<tem<<" ";
            }
        }
        
        
        
        cout<<'\n';
        
    }
    return 0;
}