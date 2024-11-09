#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        bool res=true;
        for(int i=0;i<n;i++)
        {
            if((s1[i]=='R' && s2[i]!='R') || (s1[i]!='R' && s2[i]=='R'))
            {
                res=false;
            }
        }
        if(res==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}