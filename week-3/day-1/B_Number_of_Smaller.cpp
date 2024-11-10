#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        vector<int> b(m);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        vector<int> ans;
        int i=0,j=0,cnt=0;
        while(i<m)
        {
            if(j<n &&a[j]<b[i])
            {
                cnt++;
                j++;
            }
            else
            {
                i++;
                ans.push_back(cnt);
            }
        }
        for(int val:ans)
        {
            cout<<val<<" ";
        }
    
    return 0;
}