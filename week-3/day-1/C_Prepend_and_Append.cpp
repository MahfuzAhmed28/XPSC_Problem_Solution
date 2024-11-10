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
        string s;
        cin>>s;
        int cnt=0;
        int i=0,j=n-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                cnt++;
            }
            else
            {
                break;
            }
            i++;
            j--;
        }
        cout<<n-(2*cnt)<<'\n';
    }
    return 0;
}