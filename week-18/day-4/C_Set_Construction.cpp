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
        int n;              
        cin>>n;
        vector<string> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
 
        vector<set<int>> st(n+5);
 
        for(int i=1;i<=n;i++){
            st[i].insert(i);
        }
 
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]=='1'){
                    st[j+1].insert(i+1);
                }
            }
        }
 
        for(int i=1;i<=n;i++){
            cout<<st[i].size()<<" ";
            for(auto val:st[i]){
                cout<<val<<" ";
            }
            cout<<'\n';
        }
    }
    return 0;
}