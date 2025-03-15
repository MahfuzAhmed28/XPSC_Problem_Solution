#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;

const int maxN = 2e5 + 9;
long long a[maxN], t[4 * maxN];
void build(int n, int b, int e) {
    if (b == e) {
       t[n] = a[b];
       return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = (t[l] & t[r]);
}
int query(int n, int b, int e, int i, int j) {
    if (e < i || j < b) {
       return INT_MAX;
    }
    if (b >= i && e <= j) {
       return t[n];
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return (query(l, b, mid, i, j) & query(r, mid + 1, e, i, j));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin >> n;
        for (int i = 1;i <= n;i++) {
            cin >> a[i];
        }
        cin>>m;
        build(1, 1, n);
        while(m--)
        {
            int l,k;
            cin>>l>>k;
            int ans=-1,low=1,mid,high=n;
            while(low<=high)
            {
                mid=(low+high)/2;
                int x=query(1,1,n,l,mid);
                if(x>=k)
                {
                    ans=mid;
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
            if(ans>=l)
            {
                cout<<ans<<" ";
            }
            else
            {
                cout<<-1<<" ";
            }
            
        }
        cout<<'\n';
    }
    return 0;
}