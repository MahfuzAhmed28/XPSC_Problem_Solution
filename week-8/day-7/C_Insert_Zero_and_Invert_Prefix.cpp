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
        if(v[n-1]==1)
        {
            cout<<"NO\n";
        }
        else
        {
            vector<int> v1,ans(n);
            int cnt=0,indx=-1,j=0;
            for(int i=n-1;i>=0;i--)
            {
                if(v[i]==0 && cnt==0)
                {
                    ans[j]=0;
                    j++;
                    v1.push_back(0);
                    indx=-1;
                }
                else if(v[i]==0 && cnt!=0)
                {
                    ans[j-1]=cnt;
                    ans[j]=0;
                    j++;
                    v1.push_back(0);
                    cnt=0;
                    for(int j=indx;j<v1.size();j++)
                    {
                        v1[j]=1;
                    }
                }
                else
                {
                    ans[j]=0;
                    j++;
                    v1.push_back(0);
                    cnt++;
                    if(indx==-1)
                    {
                        indx=i;
                    }
                }
            }
            if(cnt!=0)
            {
                ans[j-1]=cnt;
            }
            cout<<"YES\n";
            for(int i=0;i<n;i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<'\n';
        }
        
    }
    return 0;
}