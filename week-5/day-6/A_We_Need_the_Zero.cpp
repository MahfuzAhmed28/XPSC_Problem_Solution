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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ans=-1;
        for(int i=0;i<256;i++)
        {
            vector<int> v1;
            for(int j=0;j<n;j++)
            {
                v1.push_back(v[j]^i);
            }
            int res=0;
            for(int j=0;j<v1.size();j++)
            {
                res^=v1[j];
            }
            if(res==0)
            {
                ans=i;
                break;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}