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
        int com=v[n-1],c=0;
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]>com)
            {
                int num=v[i];
                int r1=num%10;
                num/=10;
                int r2=num%10;
                if(r1>com)
                {
                    c=1;
                    break;
                }
                else if(r1<r2)
                {
                    c=1;
                    break;
                }
                else
                {
                    com=r2;
                }
            }
            else
            {
                com=v[i];
            }
        }
        if(c==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}