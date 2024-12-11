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
        vector<int> v(n);
        int ans;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(i==0)
            {
                ans=v[i];
            }
            else
            {
                ans=(ans&v[i]);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}