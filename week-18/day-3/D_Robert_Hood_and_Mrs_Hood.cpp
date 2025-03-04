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
        int n,d,k;
        cin>>n>>d>>k;
        vector<pair<int, int>> v(k);
        for (int i=0;i<k;i++) {
            cin>>v[i].first>>v[i].second;
        }                         
        sort(v.begin(),v.end());
    
        int mx=0,mn=INT_MAX,b=-1,m=-1;
        int j=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        for (int i = 1; i <= n - d + 1; i++){
            while (j < k && v[j].first <= i + d - 1) {
                pq.push(v[j].second);
                j++;
            }
            while (pq.size()>0 && pq.top() < i) {
                pq.pop();
            }
            int c = pq.size();
            if (c > mx) {
                mx = c;
                b = i;
            }
            if (c < mn) {
                mn = c;
                m = i;
            }
        }
        cout<<b<<" "<<m<<'\n';
    }
    return 0;
}