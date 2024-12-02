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
        int ans=0;
        int com=INT_MIN;
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(com<v[i])
            {
                com=v[i];
            }
            sum+=v[i];
            if((sum-com)==com)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}