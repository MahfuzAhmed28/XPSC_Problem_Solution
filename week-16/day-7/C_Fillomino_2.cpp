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

    int n; 
        cin>>n;
        int arr[n+1][n+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                arr[i][j]=-1;
            }
        }
    
        for(int i=1; i<=n; i++){
            int a; 
            cin>>a;
            int x = i, y = i;
            for(int j=1; j<=a; j++){
                arr[x][y] = a;
                if(y>1 && arr[x][y-1] == -1)
                {
                    y--;
                } 
                else
                {
                    x++;
                } 
            }
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<'\n';
        }
    return 0;
}