#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,q;
    cin>>n>>k>>q;
    vector<int> pre(2e5+3,0);
    while(n--)
    {
        int l,r;
        cin>>l>>r;
        pre[l]++;
        pre[r+1]--;
    }
    for(int i=1;i<pre.size();i++)
    {
        pre[i]=pre[i-1]+pre[i];
        
    }
    for(int i=0;i<pre.size();i++)
    {
        if(pre[i]>=k)
        {
            pre[i]=1;
        }
        else
        {
            pre[i]=0;
        }   
    }
    vector<int> sum(2e5+3,0);
    for(int i=1;i<2e5+3;i++)
    {
        sum[i]=pre[i]+sum[i-1];
    }

    while(q--)
    {
        int ans=0;
        int a,b;
        cin>>a>>b;
        ans=sum[b]-sum[a-1];
        cout<<ans<<'\n';
    }
    return 0;
}