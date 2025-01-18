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
        vector<ll> v(n);
        map<ll,ll> track,divisor;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            track[v[i]]++;
        }
        if(n==1)
        {
            cout<<1<<'\n';
            continue;
        }
        sort(v.begin(),v.end());
        vector<ll> dif;
        for(int i=0;i<n-1;i++)
        {
            dif.push_back(v[n-1]-v[i]);
        }
        ll gcd=0;
        for(int i=0;i<dif.size();i++)
        {
            gcd=__gcd(gcd,dif[i]);
        }


        ll ans1=0,ans2=0;
        ll mx=v[n-1]+gcd;
        for(int i=0;i<n;i++)
        {
            ans1+=((mx-v[i])/gcd);
        }
        mx=v[n-1];
        while(mx>=-1000000000)
        {
            if(track[mx]==0)
            {
                break;
            }
            else
            {
                mx-=gcd;
            }
        }
        ans2=(v[n-1]-mx)/gcd;
        for(int i=0;i<n-1;i++)
        {
            ans2+=((v[n-1]-v[i])/gcd);
        }
        cout<<min(ans1,ans2)<<'\n';

    }
    return 0;
}
