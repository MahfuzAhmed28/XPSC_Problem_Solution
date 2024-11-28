#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        map<int,int> mp;
        int mx_count=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
            mx_count=max(mp[v[i]],mx_count);
        }
        long long int eql=mx_count,ans=0;
        while(true)
        {
            if(eql==n)
            {
                break;
            }
            if(eql*2<=n)
            {
                ans+=eql;
                ans++;
                eql*=2;
 
            }
            else
            {
                ans+=(n-eql);
                ans++;
                eql=n;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}