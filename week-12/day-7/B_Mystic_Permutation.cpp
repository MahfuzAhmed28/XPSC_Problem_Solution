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
        vector<int> v(n),v1;;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            v1.push_back(i+1);
        }
        if(n==1)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<n;i++)
        {
            if(v1[i]==v[i])
            {
                if(i==n-1)
                {
                    swap(v1[i],v1[i-1]);
                }
                else
                {
                    swap(v1[i],v1[i+1]);
                }
            }
        }
        for(int val:v1)
        {
            cout<<val<<" ";
        }
        cout<<'\n';
    }
    return 0;
}