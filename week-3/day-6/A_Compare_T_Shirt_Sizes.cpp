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
        string a,b;
        cin>>a>>b;
        int sz1=a.size(),sz2=b.size();
        if(a[sz1-1]==b[sz2-1])
        {
            if(a[sz1-1]=='M')
            {
                cout<<"=\n";
            }
            else if(a[sz1-1]=='S')
            {
                if(sz1<sz2)
                {
                    cout<<">\n";
                }
                else if(sz1>sz2)
                {
                    cout<<"<\n";
                }
                else
                {
                    cout<<"=\n";
                }
            }
            else
            {
                if(sz1<sz2)
                {
                    cout<<"<\n";
                }
                else if(sz1>sz2)
                {
                    cout<<">\n";
                }
                else
                {
                    cout<<"=\n";
                }
            }
        }
        else if(a[sz1-1]=='L')
        {
            cout<<">\n";
        }
        else if(b[sz2-1]=='L')
        {
            cout<<"<\n";
        }
        else if(a[sz1-1]=='M')
        {
            cout<<">\n";
        }
        else if(b[sz2-1]=='M')
        {
            cout<<"<\n";
        }
    }
    return 0;
}