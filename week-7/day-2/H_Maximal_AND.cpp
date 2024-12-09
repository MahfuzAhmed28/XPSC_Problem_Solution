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
        ll n,m;
        cin>>n>>m;
        ll res=0;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(i==0)
            {
                res=v[i];
            }
            else
            {
                res=(res&v[i]);
            }
            
        }
        for(int k=30;k>=0;k--)
        {
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                if((v[i]>>k)&1)
                {

                }
                else
                {
                    cnt++;
                }
            }
            if(cnt<=m && cnt!=0)
            {
                res+=(1<<k);
                m-=cnt;
            }
            
        }
        cout<<res<<'\n';
    }
    return 0;
}