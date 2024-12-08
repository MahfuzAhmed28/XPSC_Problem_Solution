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
        vector<int> v;
        for(int i=0;i<32;i++)
        {
            if((n>>i)&1)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
        }
        for(int i=0;i<32-1;i++)
        {
            if(v[i]==1 && v[i+1]==1)
            {
                for(int j=i;j<32;j++)
                {
                    if(v[j]==0)
                    {
                        v[i]=-1;
                        v[j]=1;
                        break;
                    }
                    else
                    {
                        v[j]=0;
                    }
                }
            }
        }
        for(int val: v)
        {

            cout<<val<<" ";
        }
    }
    return 0;
}
