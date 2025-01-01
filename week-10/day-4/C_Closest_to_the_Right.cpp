#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    while(q--)
    {
        int key,ans=n+1,l=0,r=n-1;
        cin>>key;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(key<=v[mid])
            {
                ans=mid+1;
                r=mid-1;
                
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}