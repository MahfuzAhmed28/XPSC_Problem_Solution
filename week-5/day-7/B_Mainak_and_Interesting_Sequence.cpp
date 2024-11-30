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
        int n,m;
        cin>>n>>m;
        if(m>=n)
        {
            if(n%2!=0)
            {
                cout<<"YES\n";
                int sum=0;
                for(int i=0;i<n-1;i++)
                {
                    cout<<1<<" ";
                    sum+=1;
                }
                cout<<m-sum<<'\n';
            }
            else
            {
                if(n%2==0 && m%2==0)
                {
                    cout<<"YES\n";
                    int sum=0;
                    for(int i=0;i<n-2;i++)
                    {
                        cout<<1<<" ";
                        sum+=1;
                        
                    }
                    cout<<(m-sum)/2<<" "<<(m-sum)/2;
                    cout<<'\n';
                }
                else
                {
                    cout<<"NO\n";
                }
            }
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}