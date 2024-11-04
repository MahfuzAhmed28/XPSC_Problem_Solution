#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
class cmp
{
public:
    bool operator()(pair<int,int> a,pair<int,int> b)
    {
        if(a.first>b.first)
        {
            return false;
        }
        else if(a.first<b.first)
        {
            return true;
        }
        else
        {
            if(a.second>b.second)
            {
                return true;
            }
            else
            {
                return false;
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
    map<int,int> mp;
    deque<int> v;
    //set<pair<int,int>> st;
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> st;
    int cus=1;
    int comm;
    while(t--)
    {
        cin>>comm;
        if(comm==1)
        {
            int val;
            cin>>val;
            st.push({val,cus});
            v.push_back(cus);
            mp[cus]=1;
            cus++;

        }
        else if(comm==2)
        {
             while(v.size()!=0)
             {
                 if(mp[v.front()]==1)
                 {
                     cout<<v.front()<<" ";
                     mp[v.front()]=0;
                     break;
                 }
                 else
                 {
                     v.pop_front();
                 }
             }
        }
        else
        {
             while(!st.empty())
             {
                 if(mp[st.top().second]==1)
                 {
                     cout<<st.top().second<<" ";
                     mp[st.top().second]=0;
                     st.pop();
                     break;
                 }
                 st.pop();
             }


        }
    }
    return 0;
}
