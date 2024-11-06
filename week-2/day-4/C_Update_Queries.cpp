#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1;
        vector<int> v(m);
        int arr[100000]={0};
        for(int i=0;i<m;i++)
        {
            cin>>v[i];
            arr[v[i]-1]++;
        }
        cin>>s2;
        sort(s2.begin(),s2.end());
        vector<char> v1;
        for(char c:s2)
        {
            v1.push_back(c);
        }
        int j=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                cnt+=arr[i];
                int x=arr[i]-1;
                s1[i]=v1[j];
                j++;
                while(x--)
                {
                    v1.pop_back();
                }
            }
            if(cnt==m)
            {
                break;
            }
        }
        cout<<s1<<endl;
    }
    return 0;
}