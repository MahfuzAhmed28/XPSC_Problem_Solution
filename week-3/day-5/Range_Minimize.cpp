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
        ll n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];

        }
        if(n==3)
        {
            cout<<0<<'\n';
            continue;
        }
        sort(v.begin(),v.end());
        int ans1=v[n-3]-v[0];
        int ans2=v[n-2]-v[1];
        int ans3=v[n-1]-v[2];
        cout<<min({ans1,ans2,ans3})<<'\n';
        
    }
    return 0;
}