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
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> a;
        vector<int> b(n);
        vector<int> ans(n,0);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back({x,i});
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++)
        {
            ans[a[i].second]=b[i];
        }
        for(int val:ans)
        {
            cout<<val<<" ";
        }
        cout<<'\n';

    }
    return 0;
}
