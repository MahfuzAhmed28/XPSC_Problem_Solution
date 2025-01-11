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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        auto ok=[&](int val)
        {
            vector<bool> check(n,false);
            //cout<<val<<'\n';
            vector<int> temp;
            temp=v;
            int cnt=0,k=0;
            for(int j=1;j<=val;j++)
            {
                k=0;
                int c=0;
                for(int i=n-1;i>=0;i--)
                {
                    if(check[i]==false && temp[i]<=(val-j+1) && k==0)
                    {
                        check[i]=true;
                        cnt++;
                        k=1;
                    }


                }
                for(int m=0;m<n;m++)
                {
                    if(check[m]==false && temp[m]<(val-j+1) && c==0)
                    {
                        temp[m]+=(val-j+1);

                        c=1;
                    }
                }
                /*if(val==2)
                {
                    cout<<j<<"-> ";
                    for(int a:temp)
                    {
                        cout<<a<<" ";
                    }
                    cout<<endl;
                }*/

            }
            /*for(auto a:temp)
            {
                cout<<a<<" ";
            }
            cout<<cnt<<'\n';*/
            return cnt==val;

        };
        int l=0,r=n,mid,ans;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(ok(mid))
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
