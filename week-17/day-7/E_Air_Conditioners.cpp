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
        int n, k;
        cin >> n >> k;
    
        vector<ll> v1(k),v2(k),temp(n,INT_MAX),pref(n),suff(n);
    
        for(int i = 0; i < k; i++)
        {
            cin >> v1[i];
        } 
        for(int i = 0; i < k; i++)
        {
            cin >> v2[i];
        } 
        for(int i = 0; i < k; i++)
        {
            temp[v1[i] - 1] = v2[i];
        } 
        
        ll prev = INT_MAX;
        for(int i = 0; i < n; i++) {
            pref[i] = min(prev + 1, temp[i]);
            prev = pref[i];
        }
    
        prev = INT_MAX;
        for(int i = n - 1; i >= 0; i--) {
            suff[i] = min(prev + 1, temp[i]);
            prev = suff[i];
        }
    
        for(int i = 0; i < n; i++) {
            cout << min(pref[i], suff[i]) << " ";
        }
    
        cout << '\n';
    }
    return 0;
}