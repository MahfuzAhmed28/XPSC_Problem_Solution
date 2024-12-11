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
        int maxBit=0;
        int mx=-1,mn=1020;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            maxBit=max(maxBit,__lg(v[i]));
            mx=max(mx,v[i]);
            mn=min(v[i],mn);
        }
        
        int ans=0;
        int arr[n][maxBit+1];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=maxBit;j++)
            {
                arr[i][j]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            
            for(int k=0;k<=maxBit;k++)
            {
                if((v[i]>>k)&1)
                {
                    arr[i][k]=1;
                }
                else
                {
                    arr[i][k]=0;
                }
            } 
            
             
        }
        int a=0,b=0;
        for(int i=0;i<=maxBit;i++)
        {
            int cnt1=0,cnt2=0;
            for(int j=0;j<n;j++)
            {
                if(arr[j][i]==1)
                {
                    cnt1++;
                }
                else
                {
                    cnt2++;
                }
            }
            if(cnt1!=0 && cnt1!=n)
            {
                a+=(1<<i);
            }
            
        }
        if(mn==0)
        {
            a=max(mx,a);
        }
        cout<<a<<'\n';
    }
    return 0;
}