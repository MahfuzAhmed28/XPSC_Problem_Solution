#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,mx=INT_MIN;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int dif=-1;
        bool f=false;
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(a[i]<b[i])
            {
                f=true;
            }
            mx=max(a[i]-b[i],mx);
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]-mx!=b[i])
            {
                if(b[i]!=0)
                {
                    f=true;
                    break;
                }
            }
        }
        if(!f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}