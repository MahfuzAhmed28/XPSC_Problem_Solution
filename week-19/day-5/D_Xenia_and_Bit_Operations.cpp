#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;

const int maxN = (1<<17)+10;
ll a[maxN],t[4 * maxN],ans=INF;
ll merge(ll ans_l,ll ans_r,ll seg_l,ll seg_r)
{
    ll seg_len=seg_r-seg_l+1;
    ll pw=0;
    pw=__lg(seg_len);
    if(pw & 1)
    {
        return ans_l| ans_r;
    }
    return ans_l ^ ans_r;
}
void build(ll n, ll b, ll e) {
   if (b == e) {
      t[n]= a[b];
      return;
   }
   ll mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
   build(l, b, mid);
   build(r, mid + 1, e);
   t[n]=merge(t[l],t[r],b,e);
   
}

void update(ll n, ll b, ll e, ll i, ll v) {
    if (i<b || i>e) {
       return;
    }
    if (b == e) {
       t[n] = v;
       return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[n]=merge(t[l],t[r],b,e);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   ll n,m;
   cin >> n>>m;
   ll len=(1<<n);
   for (int i = 1;i <= len;i++) {
      cin >> a[i];
   }

   build(1, 1, len);
   while(m--)
   {
     ll idx,x;
     cin>>idx>>x;
     update(1,1,len,idx,x);
     cout<<t[1]<<'\n';
   }
   return 0;
}
