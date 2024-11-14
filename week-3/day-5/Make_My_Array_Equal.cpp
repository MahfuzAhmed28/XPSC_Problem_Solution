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
        set<int> st;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            st.insert(x);
        }
        if(st.size()==1)
        {
            cout<<"YES\n";
        }
        else if(st.size()==2)
        {
            auto it=st.begin();
            if(*it==0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}