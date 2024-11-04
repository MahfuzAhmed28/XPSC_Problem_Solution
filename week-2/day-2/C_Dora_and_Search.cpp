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
        ll n;
        cin>>n;
        vector<ll> v(n);
        ll mn=INT_MAX,mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mn=min(mn,v[i]);
            mx=max(mx,v[i]);
        }
        if(v[0]!=mn && v[0]!=mx && v[n-1]!=mn && v[n-1]!=mx)
        {
            cout<<1<<" "<<n<<'\n';
        }
        else
        {
            int i=0,j=n-1,indx1=-1,indx2=-1;
            while(i<j)
            {
                int c=0;
                if(mn==v[i])
                {
                    i++;
                    mn++;
                    c=1;
                }
                if(mn==v[j])
                {
                    j--;
                    mn++;
                    c=1;
                }
                if(mx==v[i])
                {
                    i++;
                    mx--;
                    c=1;
                }
                if(mx==v[j])
                {
                    j--;
                    mx--;
                    c=1;
                }
                if(c==0)
                {
                    indx1=i+1;
                    indx2=j+1;
                    break;
                }
            }
            if(indx1!=-1 && indx2!=-1)
            {
                cout<<indx1<<" "<<indx2<<'\n';
            }
            else
            {
                cout<<-1<<'\n';
            }
        }

    }
    return 0;
}
