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
        vector<ll> pre,v;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(i==0)
            {
                pre.push_back(x);
                v.push_back(x);
            }
            else
            {
                pre.push_back(x+pre.back());
                v.push_back(max(x,v.back()));
            }
        }
        
        while(k--)
        {
            int key;
            cin>>key;
            auto it=upper_bound(v.begin(),v.end(),key);
            if(it==v.end())
            {
                cout<<pre.back()<<" ";
            }
            else
            {
                int indx=it-v.begin();
                indx--;
                if(indx==-1)
                {
                    cout<<0<<" ";
                    continue;
                }
                cout<<pre[indx]<<" ";
            }
            
            

        }
        cout<<'\n';
    }
    return 0;
}