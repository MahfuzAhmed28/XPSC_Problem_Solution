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
        int ans=0;
        int x=0;
        while(x<n)
        {
            if(ans==0)
            {
                x++;
            }
            else
            {
                x++;
                x=(x*2);
            }


            ans++;



        }
        cout<<ans<<'\n';


    }
    return 0;
}
