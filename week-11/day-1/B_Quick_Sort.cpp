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
        int cnt=1;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==cnt)
            {
                cnt++;
            }
        }
        cnt--;
        int x=n-cnt;
        if(x%k==0)
        {
            cout<<x/k<<endl;
        }
        else
        {
            cout<<(x/k)+1<<endl;
        }
    }
    return 0;
}