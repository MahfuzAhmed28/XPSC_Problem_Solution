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
        map<int,int> mp;
        int mx=-1;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            st.insert(x);
            mp[x]++;
            mx=max(mp[x],mx);
        }
        if(st.size()==0)
        {
            cout<<n<<'\n';
            continue;
        }
        if(mx>(n-mx))
        {
            cout<<(mx-(n-mx))<<'\n';
        }
        else
        {
            if(n%2==0)
            {
                cout<<0<<'\n';
            }
            else
            {
                cout<<1<<'\n';
            }
        }
    }
    return 0;
}
