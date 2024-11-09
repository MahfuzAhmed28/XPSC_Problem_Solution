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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int arr[26]={0};
        for(int i=0;i<n;i++)
        {
            int x=s[i]-'a';
            arr[x]++;
        }
        int cnt=0;
        for(int i=0;i<26;i++)
        {
            if(arr[i]%2!=0)
            {
                cnt++;
            }
        }
        
        
        if(cnt-1>k)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
        
    }
    return 0;
}