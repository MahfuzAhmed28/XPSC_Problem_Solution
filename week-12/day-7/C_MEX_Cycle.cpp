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
        int n,x,y;
        cin>>n>>x>>y;
        if(x==1 && y==1)
        {
            if(n%2==0)
            {
                for(int i=0;i<n;i++)
                {
                    cout<<i%2<<" ";
                }
            }
            else
            {
                for(int i=0;i<n-1;i++)
                {
                    cout<<i%2<<" ";
                }
                cout<<2<<" ";
            }
        }
        else if(y==x+1)
        {
            if(n%2==0)
            {
                for(int i=0;i<n;i++)
                {
                    cout<<i%2<<"\n";
                }
            }
            else
            {
                for(int i=0;i<n-1;i++)
                {
                    cout<<i%2<<" ";
                }
                cout<<2<<"\n";
            }
        }
        else{
            vector<int> v(n);
            v[x-1]=0;
            v[y-1]=1;
            for(int i=x;i<y-1;i++)
            {
                v[i]=1-v[i-1];
            }
            if(v[y-1]==v[y-2])
            {
                v[y-2]=2;
            }
            int p=v[y-1];
            int cnt=2;
            for(int i=y%n;i!=x-1;i=(i+1)%n){
                cnt++;
            }
            if(cnt%2)
            {
                v[y%n]=2;
                for(int i=(y+1)%n;i!=x-1;i=(i+1)%n){
                    v[i]=1-p;
                    p=v[i];
                }
            }
            else
            {
                for(int i=y%n;i!=x-1;i=(i+1)%n){
                    v[i]=1-p;
                    p=v[i];
                }
            }
            for(int val:v)
            {
                cout<<val<<" ";
            }
            cout<<'\n';
        }
    }
    return 0;
}