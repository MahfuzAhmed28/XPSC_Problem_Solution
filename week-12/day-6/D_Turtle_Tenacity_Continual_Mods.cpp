#include<bits/stdc++.h>
#define ll long long int
using namespace std;
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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[0]!=v[1])
        {
            cout<<"YES\n";
        }
        else
        {
            bool f=false;
            for(int i=1;i<n;i++)
            {
                if(v[i]%v[0]!=0)
                {
                    f=true;
                    break;
                }
            }
            if(f) cout<<"YES\n";
            else cout<<"NO\n";
        }
        
    }
    return 0;
}