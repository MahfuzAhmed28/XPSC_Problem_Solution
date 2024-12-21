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
        vector<string> v;
        for(int i=0;i<8;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        int Bcnt=0,Rcnt=0,r=0,b=0;
        for(int i=0;i<8;i++)
        {
            r=0;
            for(int j=0;j<8;j++)
            {
                if(v[i][j]=='R')
                {
                    r++;
                }
            }
            if(r==8)
            {
                Rcnt++;
                break;
            }
        }
        for(int i=0;i<8;i++)
        {
            b=0;
            for(int j=0;j<8;j++)
            {
                if(v[j][i]=='B')
                {
                    b++;
                }
            }
            if(b==8)
            {
                Bcnt++;
                break;
            }
        }
        if(Bcnt>0)
        {
            cout<<"B"<<endl;
        }
        else
        {
            cout<<"R"<<endl;
        }
    }
    return 0;
}