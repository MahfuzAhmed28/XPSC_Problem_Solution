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
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        int ans=0;
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(a[i]==b[j])
            {
                ans++;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}