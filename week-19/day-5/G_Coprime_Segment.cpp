#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;

const int maxN = 1e5 + 9;
ll a[maxN],t[4 * maxN],ans=INF;
ll gcd(ll a, ll b) {
   while (b) {
       a %= b;
       swap(a, b);
   }
   return a;
}
void build(ll n, ll b, ll e) {
   if (b == e) {
      t[n]= a[b];
      return;
   }
   ll mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
   build(l, b, mid);
   build(r, mid + 1, e);
   t[n]= gcd(t[l],t[r]);
}

ll query(ll node, ll b, ll e, ll l, ll r) {
    if (e < l || b > r) return 0; 
    if (b >= l && e <= r) return t[node]; 
    ll mid = (b + e) / 2;
    ll left_gcd = query(2 * node, b, mid, l, r); 
    ll right_gcd = query(2 * node + 1, mid + 1, e, l, r); 
    return gcd(left_gcd, right_gcd);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   ll n;
   cin >> n;
   for (int i = 1;i <= n;i++) {
      cin >> a[i];
   }

   build(1, 1, n);
   ll min_len = n + 1; 
    for (int l = 1, r = 1; r <= n; r++) {
        ll current_gcd = query(1, 1, n, l, r);
        while (l <= r && current_gcd == 1) {
            ans = min(ans, (ll)(r - l + 1));
            l++; 
            current_gcd = query(1, 1, n, l, r); 
        }
    }

    if (ans == INF) {
        cout << -1 << '\n'; 
    } else {
        cout << ans << '\n'; 
    }
   return 0;
}
