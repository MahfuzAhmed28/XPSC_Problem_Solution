#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    multiset<int> st;
    while(n--)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    int i=1;
    for(auto val:st)
    {
        if(val>=i)
        {
            i++;
        }
        
    }
    cout<<i-1;
    return 0;
}