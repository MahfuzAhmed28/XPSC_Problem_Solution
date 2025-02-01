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

    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    pbds<pair<int,int>> p;
    int mid;
    if(k%2==0)
    {
        mid=(k/2)-1;
    }
    else
    {
        mid=k/2;
    }
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int l=0,r=0;
    while(r<n)
    {
        p.insert({v[r],r});
        if(r-l+1==k)
        {
            cout<<p.find_by_order(mid)->first<<" ";
            p.erase({v[l],l});
            
            l++;
        }
        r++;

    }
    return 0;
}