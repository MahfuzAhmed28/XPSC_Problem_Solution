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
        int cntO=0,cntZ=0;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==0)
            {
                cntZ++;
            }
            else if(v[i]==1)
            {
                cntO++;
            }
        }
        ll ans=(1LL<<cntZ)*cntO;
        cout<<ans<<'\n';
        
    }
    return 0;
}