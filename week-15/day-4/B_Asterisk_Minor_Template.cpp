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
        string a,b;
        cin>>a>>b;
        int sz1=a.size(),sz2=b.size();
        if(a[0]==b[0])
        {
            cout<<"YES"<<endl;
            cout<<a[0]<<"*"<<endl;
            continue;
        }
        if(a[sz1-1]==b[sz2-1])
        {
            cout<<"YES"<<endl;
            cout<<"*"<<a[sz1-1]<<endl;
            continue;
        }
        bool f=false;
        int indx;
        for(int i=0;i<sz1;i++)
        {
    
            for(int j=0;j<sz2;j++)
            {
                if(a[i]==b[j] && i<sz1-1 && j<sz2-1)
                {
                    if(a[i+1]==b[j+1])
                    {
                        f=true;
                        indx=i;
                        break;
                    }
                }
                if(f) break;
    
            }
            if(f) break;
        }
        if(f)
        {
            cout<<"YES"<<endl;
            cout<<"*"<<a[indx]<<a[indx+1]<<"*"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}