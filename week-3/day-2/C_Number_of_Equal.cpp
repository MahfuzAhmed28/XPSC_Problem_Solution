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
    vector<int> v1(n),v2(m);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>v2[i];
    }
    ll ans=0;
    int l=0,r=0;
    while(l<n && r<m)
    {
        int cnt1=0,cnt2=0,curr=v1[l];
        while(l<n && v1[l]==curr)
        {
            cnt1++;
            l++;
        }
        while(r<m && curr>v2[r])
        {
            r++;
        }
        while(r<m && v2[r]==curr)
        {
            cnt2++;
            r++;
        }

        ans+=(1LL* cnt1*cnt2);
    }
    
    cout<<ans;

    

    return 0;
}
