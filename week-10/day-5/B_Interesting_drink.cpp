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
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int k;
    cin>>k;
    while(k--)
    {
        int key;
        cin>>key;
        int l=0,r=n-1;
        int ans=0;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(v[mid]<=key)
            {
                ans=mid+1;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}