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
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> a(n),b(m);
        int mnA=INT_MAX,mxB=INT_MIN,mnB=INT_MAX,mxA=INT_MIN;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            mnA=min(a[i],mnA);
            mxA=max(mxA,a[i]);
        }

        for(int i=0;i<m;i++)
        {
            cin>>b[i];
            mxB=max(b[i],mxB);
            mnB=min(b[i],mnB);
        }
        if(mxB>mnA)
        {
            if(k%2==0)
            {
                if(mxB<mxA)
                {
                    sum-=mnA;
                    sum+=mxB;
                    sum-=mxA;
                    sum+=min(mnB,mnA);
                    cout<<sum<<'\n';
                }
                else
                {
                    sum-=mnA;
                    sum+=mxB;
                    sum-=mxB;
                    sum+=min(mnB,mnA);
                    cout<<sum<<'\n';
                }
            }
            else
            {
                sum-=mnA;
                sum+=mxB;
                cout<<sum<<'\n';
            }
        }
        else
        {
            if(k%2==0)
            {
                sum-=mxA;
                sum+=mnB;
                cout<<sum<<'\n';
            }
            else
            {
                cout<<sum<<'\n';
            }
        }
    }
    return 0;
}
