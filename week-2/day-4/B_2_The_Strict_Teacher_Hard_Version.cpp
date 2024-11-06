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
        int n,m,q;
        cin>>n>>m>>q;
        
        set<int> st;
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            st.insert(x);
        }
        while(q--)
        {
            int x;
            cin>>x;
            st.insert(x);
            auto it=st.find(x);
            auto it1=st.end();
            it1--;

            if(it==st.begin())
            {
                it++;
                int y=*it;
                cout<<y-1<<'\n';
            }
            else if(it==it1)
            {
                it--;
                cout<<n-*it<<'\n';
            }
            else
            {
                auto a=it;
                auto b=it;
                a++;
                b--;
                int c=*a;
                int d=*b;
                int avg=(c+d)/2;
                cout<<min(abs(avg-c),abs(avg-d))<<'\n';
            }
            st.erase(x);
        }
        
    }
    return 0;
}