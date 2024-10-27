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
        int first=-1,last=-1;
        int i=0,j=n-1;
        while(i<n || j>=0)
        {
            if(first==-1 && s[i]=='B')
            {
                first=i;
            }
            if(last==-1 && s[j]=='B')
            {
                last=j;
            }
            i++;
            j--;
        }
        cout<<last-first+1<<endl;

    }
    return 0;
}