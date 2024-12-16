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
        vector<int> v(n),v1,v2;
        int cntOne=0,cntZero=0;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==0)
            {
                cntZero++;
                ans+=cntOne;
            }
            else
            {
                cntOne++;
            }

        }
        int cnt1=0,cnt2=0;
        ll finalAna=ans;
        for(int i=0;i<n;i++)
        {
            ll temp=ans;
            if(v[i]==0)
            {
                cnt1++;
                temp-=cnt2;
                temp+=(cntZero-cnt1);
            }
            else
            {
                cnt2++;
                temp+=(cnt2-1);
                temp-=(cntZero-cnt1);
            }
            finalAna=max(finalAna,temp);
            
        }
        cout<<finalAna<<'\n';


    }
    return 0;
}
