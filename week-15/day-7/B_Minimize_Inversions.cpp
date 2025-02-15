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
        ll n,i;
        cin>>n;
        vector<int>a(n);
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<int,int>b;
        for(i=0;i<n;i++)
        {
            int m;
            cin>>m;
            b[a[i]]=m;
        }
        sort(a.begin(),a.end());
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(i=0;i<n;i++)
        {
            cout<<b[a[i]]<<" ";
        }
        cout<<endl;
    }
    return 0;
}