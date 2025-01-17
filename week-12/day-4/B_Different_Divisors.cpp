#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int mxN=1e5+9;
    vector<bool> v(mxN,true);
    for(int i=2;i<=mxN;i++)
    {
        if(v[i])
        {
            for(int j=i+i;j<=mxN;j+=i)
            {
                v[j]=false;
            }
        }
    }
    set<int> st;
    for(int i=1;i<=mxN;i++)
    {
        if(v[i])
        {
            st.insert(i);
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int d;
        cin>>d;
        int div1=1;
        int div2=div1+d;
        auto it1=*lower_bound(st.begin(),st.end(),div2);

        int div3=it1+d;
        auto it2=*lower_bound(st.begin(),st.end(),div3);
        cout<<it1*it2<<'\n';
    }
    return 0;
}