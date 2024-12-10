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
        int maxBit=__lg(n);
        vector<int> v;
        for(int k=maxBit;k>=0;k--)
        {
            if((n>>k)&1)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
        }
        int a=0,b=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
            {
                if(b==0)
                {
                    b=(1<<(v.size()-1-i));
                }
                else
                {
                    a+=(1<<(v.size()-1-i));
                }
            }
        }
        cout<<a<<" "<<b<<'\n';
    }
    return 0;
}