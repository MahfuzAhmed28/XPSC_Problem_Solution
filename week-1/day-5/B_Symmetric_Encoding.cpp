#include<bits/stdc++.h>
using namespace std;
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
        string s;
        cin>>s;
        int arr[26]={0};
        for(int i=0;i<n;i++)
        {
            int x=s[i]-97;
            arr[x]++;
        }
        string r="";
        for(int i=0;i<26;i++)
        {
            if(arr[i]!=0)
            {
                char c=i+'a';
                r+=c;
            }
        }
        int newl=r.size()-1;
        for(int i=0;i<n;i++)
        {
            int ind =r.find(s[i]);
            char d=r[newl-ind];
            s[i]=d;
        }
        cout<<s<<endl;
    }
    return 0;
}