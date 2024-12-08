#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int f=0;
    for(int i=0;i<(1<<n);i++)
    {
        int sum=0;
        for(int k=0;k<n;k++)
        {
            if((i>>k)&1)
            {
                sum+=v[k];
            }
            else
            {
                sum-=v[k];
            }
        }
        if(sum%360==0)
        {
            f=1;
            break;
        }

        
    }
    if(f==0)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }
    
    return 0;
}