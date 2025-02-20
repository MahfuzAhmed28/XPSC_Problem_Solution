#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;
vector<int> v(262144+2);
long long int ans=0;

void check_sort(int l1,int r1, int l2,int r2)
{
    int mx1=0;
    for(int i=l1;i<=r1;i++)
    {
        mx1=max(mx1,v[i]);
    }
    int mx2=INT_MAX;
    for(int i=l2;i<=r2;i++)
    {
        mx2=min(mx2,v[i]);
    }
    if(mx1>mx2)
    {
        int j=l2;
        for(int i=l1;i<=r1;i++)
        {
            swap(v[i],v[j]);
            j++;
        }
        ans++;
    }
    if(l1==r1)
    {
        return;
    }
    int m1=(l1+r1)/2;
    int m2=(l2+r2)/2;
    check_sort(l1,m1,m1+1,r1);
    check_sort(l2,m2,m2+1,r2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        v.clear();
        v.resize(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        ans=0;
        int mid=(n+1)/2;
        check_sort(1,mid,mid+1,n);
        vector<int> a(n+1);
        for(int i=1;i<=n;i++)
        {
            a[i]=v[i];
        }
        sort(a.begin(),a.end());
        if(a==v)
        {
            cout<<ans<<'\n';
        }
        else
        {
            cout<<-1<<'\n';
        }


    }
    return 0;
}
