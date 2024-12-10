#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size(),m=s2.size();
    int sum1=0,sum2=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s1[i]=='+')
        {
            sum1++;
        }
        else
        {
            sum1--;
        }
    }
    for(int i=0;i<m;i++)
    {
        if(s2[i]=='+')
        {
            sum2++;
        }
        else if(s2[i]=='-')
        {
            sum2--;
        }
        else
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
        if(sum1==sum2)
        {
            cout<<1;
        }
        else
        {
            cout<<0;
        }
    }
    else
    {
        int a=(1<<cnt)-1;
        int x=0;
        int res=sum2;
        for(int i=0;i<=a;i++)
        {
            sum2=res;
            for(int k=cnt-1;k>=0;k--)
            {
                if((i>>k)&1)
                {
                    sum2++;
                }
                else
                {
                    sum2--;
                }
            }
            if(sum1==sum2)
            {
                x++;
            }
        }
        a++;
        double ans=x/(a*1.0);
        cout<<setprecision(9)<<ans;

    }

    return 0;
}
