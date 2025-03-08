#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;
ll getAns(ll x, ll y, string &s, map<string, vector<ll>> &mp)
{
    ll ans = 1e7;
 
    ll ind = lower_bound(mp[s].begin(), mp[s].end(), x) - mp[s].begin();
    ll sz = mp[s].size();
    for (ll i = max(ind - 1, 0LL); i < min(ind + 1, sz); i++)
    {
        ll exactIndex = mp[s][i];
        if (exactIndex <= y && exactIndex >= x)
        {
            ans = min(ans, y - x);
        }
        else
        {
            ll totalDis = abs(x - exactIndex) + abs(y - exactIndex);
            ans = min(ans, totalDis);
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n, q;
    cin >> n >> q;
    vector<string> v;
    map<string, vector<ll>> mp;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
        mp[s].push_back(i);
    }
 
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
 
        if (x > y)
        {
            swap(x, y);
        }
 
        if (v[x][0] == v[y][0] || v[x][0] == v[y][1] || v[x][1] == v[y][0] || v[x][1] == v[y][1])
        {
            cout << (y - x) << endl;
            continue;
        }
 
        ll ans = 1e7;
 
        for (ll i = 0; i < v[x].size(); i++)
        {
 
            for (ll j = 0; j < v[y].size(); j++)
            {
                string s = "";
                s.push_back(v[x][i]);
                s.push_back(v[y][j]);
                sort(s.begin(), s.end());
                ans = min(ans, getAns(x, y, s, mp));
            }
        }
 
        if (ans <= 1e6)
        {
            cout << ans << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
    }
    return 0;
}