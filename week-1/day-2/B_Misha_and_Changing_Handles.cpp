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
    map<string,string> old_to_new, new_to_old;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(new_to_old[s1]=="")
        {
            new_to_old[s2]=s1;
            old_to_new[s1]=s2;
        }
        else
        {
            old_to_new[new_to_old[s1]]=s2;
            new_to_old[s2]=new_to_old[s1];
        }
    }
    cout<<old_to_new.size()<<'\n';
    for(auto [oldHandle,newHandle]: old_to_new)
    {
        cout<<oldHandle<<" "<<newHandle<<'\n';
    }
    return 0;
}