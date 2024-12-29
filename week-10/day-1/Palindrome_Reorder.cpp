#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    string s;
    cin>>s;
    int arr[26]={0};
    for(int i=0;i<s.size();i++)
    {
        int x=s[i]-'A';
        arr[x]++;
    }
    int n=s.size();
    n--;
    int m=0;
    int indx,cnt=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i]>0)
        {
            int y=arr[i]/2;
            while(y--)
            {
                char c=i+'A';
                s[m]=c;
                s[n]=c;
                n--;
                m++;
            }
            if(arr[i]%2!=0)
            {
                indx=i;
                cnt++;
            }
        }
    }
    if(cnt==0)
    {
        
        cout<<s<<endl;
    }
    else if(cnt==1)
    {
        char c=indx+'A';
        s[s.size()/2]=c;
        cout<<s<<endl;
    }
    else
    {
        cout<<"NO SOLUTION";
    }
    return 0;
}