#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<pair<int,int>> v;
    int ans=0;
    ll mn=INF;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            ans++;
        }
        else
        {
            if(v[i].second<v[i-1].second)
            {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}