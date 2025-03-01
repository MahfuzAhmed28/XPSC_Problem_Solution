#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;  
        cin>>n>>k;
        vector<int> a(n);
 
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> suff(n,0);
        suff[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=suff[i+1]+(a[i]==a[n-1]);
        }
        if(a[0]==a[n-1])
        {
            if(suff[0]%k==0 or suff[0]>=k)
            {
                cout<<"YES"<<endl;
                continue;
            }
        }
        bool ok=false;
        int cnt=0;
        for(int i=0;i<=n-2;i++)
        {
            cnt+=(a[i]==a[0]);
            if(cnt%k==0 and suff[i+1]>=k)
            {
                ok=true;
                break;
            }
        }
        if(ok)
        {
            cout<<"YES"<<endl;
        }
        else{
 
            cout<<"NO"<<endl;
        }
    }
    return 0;
}