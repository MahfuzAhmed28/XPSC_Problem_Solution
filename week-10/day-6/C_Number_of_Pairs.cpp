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
        int n,l,r;
        cin>>n>>l>>r;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;

        }
        sort(v.begin(),v.end());
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            int x=lower_bound(v.begin(),v.end(),l-v[i])-v.begin();
            int y=upper_bound(v.begin(),v.end(),r-v[i])-v.begin();
            if(y>i && x<=i)
            {
                x++;
            }
            if(x<y)
            {
                ans+=(y-x);
            }
            
        }
        cout<<ans/2<<'\n';
    }
    return 0;
}