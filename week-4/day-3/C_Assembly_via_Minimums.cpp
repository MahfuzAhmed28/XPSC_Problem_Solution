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
        map<int,int> mp;
        for(int i=0;i<(n*(n-1))/2;i++)
        {
            int x;
            cin>>x;
            mp[x]++;

        }
        vector<pair<int,int>> v;

        for(auto [x,y]:mp)
        {
            v.push_back({x,y});
        }
        sort(v.rbegin(),v.rend());
        int arr[n]={0};
        int sz=0;
        int cnt=0;
        int res=0,i=1;
        arr[0]=1000000000;
        while(sz<v.size())
        {
            res=i;
            cnt=v[sz].second;   
            arr[i]=v[sz].first;
            i++;
            while(res<cnt)
            {
                arr[i]=v[sz].first;
                res+=i;
                i++;
            }
            
            
            
            sz++;

        }
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }


        cout<<'\n';


    }
    return 0;
}
