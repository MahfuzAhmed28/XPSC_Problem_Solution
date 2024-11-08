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
        string temp="Timur";
        if(n!=temp.size())
        {
            cout<<"NO\n";
        }
        else
        {
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                if(s.find(temp[i])!=-1)
                {
                    cnt++;
                }
            }
            if(cnt==temp.size())
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}