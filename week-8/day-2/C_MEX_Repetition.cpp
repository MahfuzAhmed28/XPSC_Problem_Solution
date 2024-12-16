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
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        int arr[100005]={0};
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            arr[v[i]]=1;
        }
        int miss;
        for(int i=0;i<=n;i++)
        {
            if(arr[i]==0)
            {
                miss=i;
                break;
            }
        }
        if(k%(n+1)==0)
        {
            for(int val:v)
            {
                cout<<val<<" ";
            }
        }     
        else
        {
            int x=k%(n+1);
            int j=x;
            x--;
            for(int i=n-x;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            
            cout<<miss<<" ";
            for(int i=0;i<n-x-1;i++)
            {
                cout<<v[i]<<" ";
            }

        }
        cout<<'\n';
        
        

    }
    return 0;
}