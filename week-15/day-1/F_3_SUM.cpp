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
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]%10]++;
        }
        bool ans=false;
        if(mp[1]>=3)
        {
            ans=true;
        }
        for(int i=0;i<=9;i++)
        {
            if(mp[i]>=2)
            {
                for(int j=0;j<=9;j++)
                {
                    if(i!=j && mp[j]>=1 && ((2*i)+j)%10==3)
                    {
                        ans=true;
                        break;
                    }
                }
            }
            
        }
        for(int i=0;i<=9;i++)
        {
            if(mp[i]>=1)
            {
                for(int j=i+1;j<=9;j++)
                {
                    if(mp[j]>=1)
                    {
                        for(int k=j+1;k<=9;k++)
                        {
                            if(mp[k]>=1)
                            {
                                if((i+j+k)%10==3)
                                {
                                    ans=true;
                                }
                            }
                        }
                    }
                }
            }
            
        }
        if(ans) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}