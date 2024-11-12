#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
        int n,m;
        cin>>n>>m;
        vector<ll> a(n),b(m),ans;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        int l=0,r=0;
        while(l<n || r<m)
        {
            if(l<n && r<m)
            {
                if(a[l]<b[r])
                {
                    ans.push_back(a[l]);
                    l++;
                }
                else
                {
                    ans.push_back(b[r]);
                    r++;
                }
            }
            else if(l<n)
            {
                ans.push_back(a[l]);
                l++;
            }
            else
            {
                ans.push_back(b[r]);
                r++;
            }
        }
        for(ll val:ans)
        {
            cout<<val<<" ";
        }
    
    return 0;
}