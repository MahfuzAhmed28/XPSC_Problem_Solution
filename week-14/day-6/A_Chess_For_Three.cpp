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
        int p1,p2,p3;
        cin>>p1>>p2>>p3;
        if((p1%2!=0 && p2%2!=0 && p3%2!=0) || (p1%2!=0 && p2%2==0 && p3%2==0)||(p1%2==0 && p2%2!=0 && p3%2==0)||p1%2==0 && p2%2==0 && p3%2!=0)
        {
            cout<<-1<<endl;
        }
        else if(p1+p2<=p3)
        {
            cout<<p1+p2<<endl;
        }
        else
        {
            cout<<(p1+p2+p3)/2<<endl;
        }
    }
    return 0;
}