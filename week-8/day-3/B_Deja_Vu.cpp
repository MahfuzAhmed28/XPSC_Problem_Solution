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
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n),x(q);
        vector<ll> track;
        int arr[31]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<q;i++)
        {
            cin>>x[i];
            if(arr[x[i]]==0)
            {
                track.push_back(x[i]);
                arr[x[i]]=1;
            }
        }
        for(int i=0;i<track.size();i++)
        {
            ll c=track[i];
            ll d=(1<<c);
            for(int j=0;j<n;j++)
            {
                if(a[j]%d==0)
                {
                    a[j]+=(1LL<<(c-1));
                }
            }
            
        }
        
        for(int val:a)
        {
            cout<<val<<" ";
        }
        cout<<'\n';
    }
    return 0;
}