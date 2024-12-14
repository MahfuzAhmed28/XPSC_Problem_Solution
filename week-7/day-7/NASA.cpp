#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
vector<int> palindrome;
bool is_palindrome(int n)
{
    string s1=to_string(n);
    string s2=s1;
    reverse(s2.begin(),s2.end());
    if(s1==s2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void find_palindrome()
{
    for(int i=0;i<(1<<15)-1;i++)
    {
        if(is_palindrome(i))
        {
            palindrome.push_back(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    find_palindrome();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n),cnt(1<<15);
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            cnt[v[i]]++;
        }
        ll ans=n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<palindrome.size();j++)
            {
                int p=(v[i]^palindrome[j]);
                ans+=cnt[p];    
                
            }
        }
        cout<<ans/2<<'\n';

    }
    return 0;
}