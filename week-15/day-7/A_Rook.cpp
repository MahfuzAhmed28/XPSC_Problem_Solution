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
        string s,temp;
        cin>>s;
        char a=s[0];
        char b=s[1];
        for(int i=1;i<=8;i++)
        {
            temp="";
            char d=i+48;
            temp+=a;
            temp+=d;
            if(temp!=s)
            {
                cout<<temp<<'\n';
            }
        }
        for(char c='a' ;c<='h';c++)
        {
            if(c!=a)
            {
                cout<<c<<b<<'\n';
            }
        }
    }
    return 0;
}