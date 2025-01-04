#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c=1;

    while(true)
    {
        int n,q;
        cin>>n>>q;
        if(n==0 && q==0)
        {
            break;
        }
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        cout<<"CASE# "<<c<<":\n";
        c++;
        while(q--)
        {
            int x;
            cin>>x;
            auto it=lower_bound(v.begin(),v.end(),x);
            if(v.end()==it)
            {
                cout<<x<<" not found\n";
            }

            else
            {
                if(*it==x)
                {
                    int ans=it-v.begin();
                    ans++;
                    cout<<x<<" found at "<<ans<<'\n';
                }
                else
                {
                    cout<<x<<" not found\n";
                }
            }
        }
    }
    return 0;
}
