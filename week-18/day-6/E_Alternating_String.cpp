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
       ll n;
       cin>>n;
       string s;
       cin>>s;
       map<char,ll>odd,even;
       ll maxodd=0,maxeven=0;
       for(int i=0;i<n;i++)
       {
           if(i%2==0)
           {
               even[s[i]]++;
               maxeven=max(even[s[i]],maxeven);
           }
           else
           {
               odd[s[i]]++;
               maxodd=max(odd[s[i]],maxodd);
           }
       }
       if(n%2==0)
       {
            cout<<(n/2)-maxeven+(n/2)-maxodd<<endl;
       }
       else
       {
           long long min1=INT_MAX;
           map<char,ll>cureven,curodd;
           for(int i=0;i<n;i++)
           {
                if(i%2==0)
                {
                    even[s[i]]--;
                }
                else
                {
                    odd[s[i]]--;
                }
                for(auto x:odd)
                {
                    char f=x.first;
                    ll s=x.second;
                    cureven[f]+=s;
                }
                for(auto x:even)
                {
                    char f=x.first;
                    ll s=x.second;
                    curodd[f]+=s;
                }
                ll maxodd=0,maxeven=0;
                for(auto x:cureven)
                {
                   maxeven=max(maxeven,x.second);
                }
                for(auto x:curodd)
                {
                   maxodd=max(maxodd,x.second);
                }
                ll ok=(n/2)-maxodd+(n/2)-maxeven+1;
                min1=min(min1,ok);
                for(auto x:odd)
                {
                    char f=x.first;
                    ll s=x.second;
                    cureven[f]-=s;
                }
                for(auto x:even)
                {
                    char f=x.first;
                    ll s=x.second;
                    curodd[f]-=s;
                }
                if(i%2==1)
                {
                    curodd[s[i]]++;
                }
                else
                {
                    cureven[s[i]]++;
                }
           }
           cout<<min1<<'\n';

        }
    
    }
    return 0;
}
