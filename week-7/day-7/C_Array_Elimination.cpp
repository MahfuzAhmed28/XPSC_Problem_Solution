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
        ll n;
        cin>>n;
        vector<ll> v(n);
        int arr[n][31];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<31;j++)
            {
                arr[i][j]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            for(int k=30;k>=0;k--)
            {
                if((v[i]>>k)&1)
                {
                    arr[i][k]=1;
                    //cout<<"Yes\n";
                }
            }

        }
        /*for(int i=0;i<n;i++)
        {
            for(int j=0;j<31;j++)
            {
                cout<<arr[i][j];
            }
        }*/
        vector<int> cnt;
        int a=0;
        for(int i=30;i>=0;i--)
        {
            a=0;
            for(int j=0;j<n;j++)
            {
                if(arr[j][i]==1)
                {
                    a++;
                }
            }
            cnt.push_back(a);
        }
        int g=0;
        for(int val:cnt)
        {
            g=__gcd(g,val);
        }
        for(int i=1;i<=n;i++)
        {
            if(g%i==0)
            {
                cout<<i<<" ";
            }
        }
        cout<<'\n';
    }
    return 0;
}
