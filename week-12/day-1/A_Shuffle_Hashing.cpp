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
        string p,h;
        cin>>p>>h;
        int n=p.size();
        bool ans=false;
        sort(p.begin(),p.end());
        for(int i=0;i<h.size();i++)
        {
            if((i+n)-1<h.size() && ans==false)
            {
                string temp=h.substr(i,n);
                sort(temp.begin(),temp.end());
                //cout<<temp<<'\n';
                if(temp==p)
                {
                    ans=true;
                    break;
                }
            }
            else
            {
                break;
            }
        }
        if(ans) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
