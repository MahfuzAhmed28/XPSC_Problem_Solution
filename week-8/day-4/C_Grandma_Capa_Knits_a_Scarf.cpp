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
        string s;
        cin>>s;
        int arr[26]={0};
        for(int i=0;i<n;i++)
        {
            int x=s[i]-'a';
            arr[x]++;
        }
        int ans=INT_MAX,ans1=0;
        for(int i=0;i<26;i++)
        {
            int cnt=0;
            
            if(arr[i]!=0)
            {
                int l=0,r=n-1;
                char c=i+'a';
                int f=0;
                while(l<r)
                {
                    if(s[l]==s[r])
                    {
                        l++;
                        r--;
                    }
                    else if(s[l]==c)
                    {
                        l++;
                        cnt++;
                    }
                    else if(s[r]==c)
                    {
                        r--;
                        cnt++;
                    }
                    else
                    {
                        f=1;
                        break;
                    }
                }
                if(f==0)
                {
                    ans=min(ans,cnt);
                }
                

            }
        }
        if(ans==INT_MAX)
        {
            cout<<-1<<'\n';
        }
        else
        {
            cout<<ans<<'\n';
        }
    }
    return 0;
}