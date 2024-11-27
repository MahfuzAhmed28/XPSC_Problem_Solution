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
        int n,even=0,odd=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(odd==0 || even==0)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            int mxEven=0,indx;
            sort(v.begin(),v.end());
            for(int i=n-1;i>=0;i--)
            {
                if(v[i]%2!=0)
                {
                    indx=i;
                    break;
                }
                else
                {
                    mxEven++;
                }
            }
            int ans=0;
            long long int lastOdd=v[indx];
            for(int i=0;i<indx;i++)
            {
                if(v[i]%2==0)
                {
                    ans++;
                    lastOdd+=v[i];
                }
            }
 
            if(mxEven!=0)
            {
                int cnt1=0,cnt2=0;
                long long int newOdd=lastOdd;
                for(int i=indx+1;i<n;i++)
                {
                    if(v[i]%2==0)
                    {
                        if(lastOdd>v[i])
                        {
                            cnt1++;
                            lastOdd+=v[i];
                        }
                        else
                        {
                            cnt1+=2;
                            lastOdd+=(v[i]+v[i]);
                        }
                    }
                }
                for(int i=n-1;i>indx;i--)
                {
                    if(v[i]%2==0)
                    {
                        if(newOdd>v[i])
                        {
                            cnt2++;
                            newOdd+=v[i];
                        }
                        else
                        {
                            cnt2+=2;
                            newOdd+=(v[i]+v[i]);
                        }
                    }
                }
                ans+=min(cnt1,cnt2);
 
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}