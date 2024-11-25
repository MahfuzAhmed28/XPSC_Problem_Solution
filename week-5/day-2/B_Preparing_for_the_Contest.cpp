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
        int mn=1,mx=n,cnt=0;
        vector<int> v;
        for(int i=0;i<k;i++)
        {
            v.push_back(mn);
            mn++;
            cnt++;
        }
        int x=n;
        while(cnt<n)
        {
            v.push_back(x);
            x--;
            cnt++;
        }
        for(int val:v)
        {
            cout<<val<<" ";
        }
        cout<<'\n';
    }
    return 0;
}