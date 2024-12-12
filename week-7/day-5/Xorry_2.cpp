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
        int cnt=0;
        for(int k=0;k<=maxBit;k++)
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
        int x=0;
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]==1)
            {
                x++;
            }
            if(v[i]==0 && x>=2)
            {
                cnt++;
            }
        }
        cout<<(1<<cnt)<<'\n';
        


    }
    return 0;
}
