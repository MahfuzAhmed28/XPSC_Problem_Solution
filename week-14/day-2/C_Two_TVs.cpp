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
    map<int,int> mp;
    int sum=0;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    bool ans=true;
    for(auto [x,y]:mp)
    {
        sum+=y;
        if(sum>2)
        {
            ans=false;
            break;
        }
    }
    if(!ans)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }
    return 0;
}