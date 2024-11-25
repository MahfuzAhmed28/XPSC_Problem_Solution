#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
class cmp{
    public:
    bool operator()(pair<int,int> a,pair<int,int> b)
    {
        if(a.first<b.first)
        {
            return true;
        }
        else if(a.first>b.first)
        {
            return false;
        }
        else
        {
            if(a.second<b.second)
            {
                return false;
            }
            else if(a.second>b.second)
            {
              return true;
            }
        }
    }
};
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
        string s;
        cin>>s;
        priority_queue<pair<int,int>, vector<pair<int,int>>,cmp> pq;
        int arr[26]={0};
        string ans="";
        for(int i=0;i<n;i++)
        {

            int x=s[i]-'a';
            arr[x]++;
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]!=0)
            {
                pq.push({arr[i],i});
            }
        }
        while(!pq.empty())
        {
            pair<int,int> x=pq.top();
            pq.pop();
            char c=x.second+'a';
            ans+=c;
            x.first--;
            if(x.first!=0)
            {
                pq.push({x.first,x.second});
            }

        }
        cout<<ans<<'\n';
    }
    return 0;
}
