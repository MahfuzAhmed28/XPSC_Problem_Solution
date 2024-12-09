#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(m+1);
    int maxBit=0;
    for(int i=0;i<m+1;i++)
    {
        cin>>v[i];
        maxBit=max(maxBit,__lg(v[i]));
    }
    vector<vector<int>> soldier_type;
    for(int i=0;i<m;i++)
    {
        vector<int> temp;
        for(int k=maxBit;k>=0;k--)
        {
            if((v[i]>>k)&1)
            {
                temp.push_back(k);
            }
        }
        soldier_type.push_back(temp);
    }
    vector<int> feroda;

    for(int k=maxBit;k>=0;k--)
    {
        if((v[m]>>k)&1)
        {
            feroda.push_back(k);
        }
    }
    int ans=0;
    for(vector<int> x:soldier_type)
    {
        int cnt=0;

        for(int val:x)
        {
            auto it=find(feroda.begin(),feroda.end(),val);
            if(it==feroda.end())
            {
                cnt++;
            }
        }

        for(int val:feroda)
        {
            auto it=find(x.begin(),x.end(),val);
            if(it==x.end())
            {
                cnt++;
            }
        }



        if(cnt<=k)
        {
            ans++;
        }
    }

    cout<<ans;


    return 0;
}
