#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int r=i+1;
                int c=j+1;
                int d=0;
                while(r<n && c<m)
                {
 
                    sum+=arr[r][c];
 
 
                    r++;
                    c++;
                }
                r=i-1;
                c=j-1;
                d=0;
                while(r>=0 && c>=0)
                {
 
                    sum+=arr[r][c];
 
                    r--;
                    c--;
                }
                r=i-1;
                c=j+1;
                d=0;
                while(r>=0 && c<m)
                {
 
                    sum+=arr[r][c];
 
                    r--;
                    c++;
                }
                r=i+1;
                c=j-1;
                d=0;
                while(r<n && c>=0)
                {
 
                        sum+=arr[r][c];
 
                    r++;
                    c--;
                }
                sum+=arr[i][j];
                ans.push_back(sum);
                sum=0;
 
 
 
            }
        }
        sort(ans.begin(),ans.end());
        cout<<ans[ans.size()-1];
        cout<<endl;
    }
    return 0;
}