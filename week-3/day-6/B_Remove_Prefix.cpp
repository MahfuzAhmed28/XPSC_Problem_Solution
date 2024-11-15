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
        deque<int> v;
        map<int,int> mp;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            
            v.push_back(x);
            mp[x]++;
            
            if(mp[x]>1)
            {
                while(true)
                {
                    ans++;
                    int y=v.front();
                    if(y!=x)
                    {
                        mp[y]--;
                        v.pop_front();
                    }
                    else
                    {
                        mp[x]--;
                        v.pop_front();
                        break;
                    }
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}