#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        long long int sum=0,ans;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(i<n-2)
            {
                sum+=v[i];
            }
            
        }
        sum=v[n-2]-sum;
        ans=v[n-1]-sum;
        cout<<ans<<endl;
    }
    return 0;
}