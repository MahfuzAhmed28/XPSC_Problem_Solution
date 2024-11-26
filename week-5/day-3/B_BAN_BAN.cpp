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
        int a=n/2;;
        if(n%2!=0)
        {
            a++;
        }
        int x=1,y=n*3;
        cout<<a<<endl;
        for(int i=0;i<a;i++)
        {
            cout<<x<<" "<<y<<endl;
            x+=3;
            y-=3;
        }
        
    }
    return 0;
}