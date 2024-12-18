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
        int c=0;
        for(int i=0;i<n;i++)
        {
            int x=v[i];
            if(v[x-1]==i+1)
            {
                c=1;
            }
        }
        if(c==1)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<3<<endl;
        }
    }
    return 0;
}