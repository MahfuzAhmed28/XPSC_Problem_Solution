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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(is_sorted(v.begin(),v.end()))
        {
            cout<<0<<'\n';
        }
        else
        {
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                if(abs(v[i]-(i+1))%k)
                {
                    cnt++;
                }
            }
            if(cnt>2)
            {
                cout<<-1<<'\n';
            }
            else if(cnt==2)
            {
                cout<<1<<'\n';
            }
            else
            {
                cout<<0<<'\n';
            }
        }
    }
    return 0;
}