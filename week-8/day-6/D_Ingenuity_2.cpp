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
        int sz;
        cin>>sz;
        string s1,ans="";
        cin>>s1;
        ans=s1;
        stack<pair<char,int>> st1,st2;
        int cnt1=0,cnt2=0,f=0;
        int i=0;
        for(char c:s1)
        {
            if(c=='N' || c=='S')
            {
                if(st1.empty())
                {
                    st1.push({c,i});
                }
                else
                {
                    if(st1.top().first==c)
                    {
                        
                        ans[st1.top().second]='R';
                        ans[i]='H';
                        st1.pop();
                        f=1;
                    }
                    else
                    {
                        
                        
                        if(cnt1%2==0)
                        {
                            ans[st1.top().second]='R';
                            ans[i]='R';
                            cnt1++;
                        }
                        else
                        {
                            ans[st1.top().second]='H';
                            ans[i]='H';
                            cnt1++;
                        }
                        st1.pop();
                    }
                    
                }
            }
            else
            {
                if(st2.empty())
                {
                    st2.push({c,i});
                }
                else
                {
                    if(st2.top().first==c)
                    {
                        ans[st2.top().second]='R';
                        ans[i]='H';
                        st2.pop();
                        f=1;
                    }
                    else
                    {
                        
                        if(cnt1%2==0)
                        {
                            ans[st2.top().second]='R';
                            ans[i]='R';
                            cnt1++;
                        }
                        else
                        {
                            ans[st2.top().second]='H';
                            ans[i]='H';
                            cnt1++;
                        }
                        st2.pop();
                    }
                    
                }
            }
            i++;
        }
        if(!st1.empty())
        {
            f=0;
            cout<<"NO\n";
            continue;
        }
        if(!st2.empty())
        {
            f=0;
            cout<<"NO\n";
            continue;
        }
        if(f==0)
        {
            if(cnt1<=1)
            {
                cout<<"NO";
            }
            else
            {
                cout<<ans;
            }
            
        }
        else
        {
            cout<<ans;
        }
        cout<<'\n';
    }
    return 0;
}