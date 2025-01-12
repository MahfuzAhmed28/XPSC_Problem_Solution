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
        vector<int> a(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        map<pair<pair<int,int>,int>,int> two,three;
        ll ans=0;
        for(int i=3;i<=n;i++)
        {
            int temp=three[{{a[i],a[i-1]},a[i-2]}];
            ans+=two[{{0,a[i-1]},a[i-2]}]-temp;
            ans+=two[{{a[i],0},a[i-2]}]-temp;
            ans+=two[{{a[i],a[i-1]},0}]-temp;
            two[{{0,a[i-1]},a[i-2]}]++;
            two[{{a[i],0},a[i-2]}]++;
            two[{{a[i],a[i-1]},0}]++;
            three[{{a[i],a[i-1]},a[i-2]}]++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
