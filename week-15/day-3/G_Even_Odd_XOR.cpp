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
        if(n%2==0)
        {
            if((n/2)%2==0)
            {
                int x=0,y=2;
                for(int i=0;i<n/2;i++)
                {
                    cout<<x<<" ";
                    cout<<y<<" ";
                    if(x%2!=0)
                    {
                        x+=3;
                        y+=3;
                    }
                    else
                    {
                        x++;
                        y++;
                    }
                }
            }
            else
            {
                int x=(1<<30);
                int y=(1<<29);
                cout<<0<<" "<<x<<" ";
                int curr=1;
                for(int i=0;i<(n/2)-2;i++)
                {
                    cout<<curr<<" "<<curr+y<<" ";
                    curr++;
                }
                ll last=curr+x+y;
                cout<<curr<<" "<<last<<" ";
            }
        }
        else
        {
            if((n/2)%2!=0)
            {
                for(int i=1;i<=n;i++)
                {
                    cout<<i<<" ";
                }
            }
            else
            {
                int x=3,y=2;
                for(int i=0;i<n/2;i++)
                {
                    cout<<x<<" ";
                    cout<<y<<" ";
                    x+=2;
                    y+=2;
                }
                cout<<0<<" ";
            }
        }
        cout<<'\n';
    }
    return 0;
}