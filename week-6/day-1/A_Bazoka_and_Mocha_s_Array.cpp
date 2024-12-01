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
        vector<int> v1(n);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int min1=v1[0],indx=n;
        vector<int> v2;
        v2.push_back(min1);
        for(int i=1;i<n;i++)
        {
            if(min1<=v1[i])
            {
                min1=v1[i];
                v2.push_back(min1);
            }
            else
            {
                indx=i;
                break;
            }
        }
        vector<int> v3;
        for(int i=indx;i<n;i++)
        {
            v3.push_back(v1[i]);
        }
        for(int i=0;i<v2.size();i++)
        {
            v3.push_back(v2[i]);
        }
        if(is_sorted(v3.begin(),v3.end()))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}