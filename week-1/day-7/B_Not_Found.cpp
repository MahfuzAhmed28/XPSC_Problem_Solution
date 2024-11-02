#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int arr[26]={0};
    for(int i=0;i<s.size();i++)
    {
        int x=s[i]-'a';
        arr[x]++;
    }
    char c='*';
    for(int i=0;i<26;i++)
    {
        if(arr[i]==0)
        {
            c=i+'a';
            break;
            
        }
    }
    if(c!='*')
    {
        cout<<c;
    }
    else
    {
        cout<<"None";
    }
    return 0;
}