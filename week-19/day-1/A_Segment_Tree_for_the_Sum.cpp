#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;

const int maxN = 1e5 + 9;
long long a[maxN], t[4 * maxN];
void build(int n, int b, int e) {
    if (b == e) {
       t[n] = a[b];
       return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = t[l] + t[r];
 }
 
 void update(int n, int b, int e, int i, int v) {
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
    t[n] = t[l] + t[r];
 }
 
 long long query(int n, int b, int e, int i, int j) {
    if (e < i || j < b) {
       return 0;
    }
    if (b >= i && e <= j) {
       return t[n];
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
 }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
   cin >> n >> m;
   for (int i = 1;i <= n;i++) {
      cin >> a[i];
   }

   build(1, 1, n);
   while (m--) {
      int t;
      cin >> t;
      if (t == 1) {
         int idx, v;
         cin >> idx >> v;
         idx++;
         update(1, 1, n, idx, v);
      }
      else {
         int l, r;
         cin >> l >> r;
         l++;
         long long ans = query(1, 1, n, l, r);
         cout << ans << endl;
      }
   }
    return 0;
}