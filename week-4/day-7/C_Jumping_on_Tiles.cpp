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
        string s;
        cin>>s;
        int n=s.size();
        int x=s[0]-'a';
        int y=s[n-1]-'a';
        int ans=abs(x-y);
        int arr[26]={0};
        vector<int> arr1[26];
        for(int i=1;i<n-1;i++)
        {
            int z=s[i]-'a';
            arr[z]++;
            arr1[z].push_back(i);
        }
        vector<int> v;
        v.push_back(1);
        if(x>y)
        {
            for(int i=x;i>=y;i--)
            {
                for(int val:arr1[i])
                {
                    v.push_back(val+1);
                }
            }
        }
        else
        {
            for(int i=x;i<=y;i++)
            {
                for(int val:arr1[i])
                {
                    v.push_back(val+1);
                }
            }
        }
        v.push_back(n);
        cout<<ans<<" "<<v.size()<<'\n';
        for(int val:v)
        {
            cout<<val<<" ";
        }
        cout<<'\n';
    }
    return 0;
}