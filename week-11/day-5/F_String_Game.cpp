#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,p;
    cin>>s>>p;
    int n=s.size(),m=p.size();
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        v[i]--;
    }

    auto ok=[&](int del)
    {
        vector<bool> d(n); 
        for(int i=0;i<=del;i++)
        {
            d[v[i]]=true;
        }
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(!d[i] && p[j]==s[i])
            {
                j++;
                if(j==m)
                {
                    return true;
                }
            }
        }
        return false;
    };
    int l=0,r=n-1,mid,ans=0;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid+1;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans;
    return 0;
}