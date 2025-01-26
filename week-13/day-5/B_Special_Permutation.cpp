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
        int n,a,b;
        cin>>n>>a>>b;
        vector<int> v1,v2;
        int arr[102]={0};
        arr[a]=1;
        arr[b]=1;
        int sz1=0,sz2=0;
        v1.push_back(a);
        sz1++;
        for(int i=1;i<=n;i++)
        {
            if(i>a && i>b && sz1<n/2)
            {
                v1.push_back(i);
                sz1++;
                arr[i]=1;
            }
        }
        //cout<<sz1<<" ";
        if(sz1!=n/2)
        {
            int x=b;
            x--;
            while(sz1<n/2 && x>a)
            {
                //cout<<"Here";
                v1.push_back(x);
                arr[x]=1;
                sz1++;
                x--;
            }
        }
 
        if(sz1!=n/2)
        {
            cout<<-1;
        }
        else
        {
            v2.push_back(b);
            sz2++;
            for(int i=b-1;i>=1;i--)
            {
                if(arr[i]==0)
                {
                    v2.push_back(i);
                    sz2++;
                }
            }
            if(sz2==n/2)
            {
                for(int i=0;i<v1.size();i++)
                {
                    cout<<v1[i]<<" ";
                }
                for(int i=0;i<v2.size();i++)
                {
                    cout<<v2[i]<<" ";
                }
            }
            else
            {
                cout<<-1;
            }
        }
 
        cout<<'\n';
    }
    return 0;
}