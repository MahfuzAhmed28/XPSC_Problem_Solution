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
        map<char,set<char>> mpF,mpS;
        map<char,int[26]> mpcnt1,mpcnt2;

        ll ans=0;
        int cnt1=0,cnt2=0;
        while(n--)
        {
            string s;
            cin>>s;
            if(mpF[s[0]].size()==0)
            {
                for(int i=0;i<26;i++)
                {
                    mpcnt1[s[0]][i]=0;
                }
                int x=s[1]-'a';
                mpcnt1[s[0]][x]++;
                mpF[s[0]].insert(s[1]);
            }
            else
            {
                int x=s[1]-'a';
                mpcnt1[s[0]][x]++;
                for(int i=0;i<26;i++)
                {
                    if(i!=x)
                    {
                        ans+=mpcnt1[s[0]][i];
                    }
                }

            }
            if(mpS[s[1]].size()==0)
            {
                for(int i=0;i<26;i++)
                {
                    mpcnt2[s[1]][i]=0;
                }
                int x=s[0]-'a';
                mpcnt2[s[1]][x]++;
                mpS[s[1]].insert(s[0]);
            }
            else
            {
                cnt1++;
                int x=s[0]-'a';
                mpcnt2[s[1]][x]++;
                for(int i=0;i<26;i++)
                {
                    if(i!=x)
                    {
                        ans+=mpcnt2[s[1]][i];
                    }
                }

            }
        }

        cout<<ans<<'\n';
    }
    return 0;
}
