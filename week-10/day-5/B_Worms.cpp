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
        if(i>0)
        {
            v[i]+=v[i-1];
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int key;
        cin>>key;
        auto it=lower_bound(v.begin(),v.end(),key);
        int l=0,r=n-1;
        int ans=0;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(v[mid]==*it)
            {
                ans=mid;
                break;
            }
            else if(v[mid]>*it)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans+1<<'\n';
    }
    return 0;
}