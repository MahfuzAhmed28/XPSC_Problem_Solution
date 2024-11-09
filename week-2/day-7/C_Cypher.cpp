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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            int m;
            cin>>m;
            string s;
            cin>>s;
            for(int j=0;j<m;j++)
            {
 
                if(s[j]=='U')
                {
                    v[i]--;
                    if(v[i]==-1)
                    {
                        v[i]=9;
                    }
                }
                else
                {
                    v[i]++;
                    if(v[i]==10)
                    {
                        v[i]=0;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}