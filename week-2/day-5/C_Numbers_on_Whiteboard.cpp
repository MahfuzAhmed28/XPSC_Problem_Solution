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
        int q=n;
        set<int>st;
        for(int i=1;i<=n;i++)
        {
            st.insert(i);
        }
        vector<pair<int,int>> v;
        q--;
        while(q--)
        {
            auto it1=st.rbegin();
            int a=*it1;
            it1--;
            int b=*it1;
            st.erase(a);
            st.erase(b);
            v.push_back({a,b});
            if((b+a)%2==0)
            {
                st.insert((a+b)/2);
            }
            else
            {
                st.insert(((a+b)/2)+1);
            }  
        }
        auto it=st.begin();
        cout<<*it<<'\n';
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<'\n';
        }
        
        

        
    }
    return 0;
}