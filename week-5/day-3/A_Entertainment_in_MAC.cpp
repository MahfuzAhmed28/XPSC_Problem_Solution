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
        string s;
        cin>>s;
        int i=0,j=s.size()-1;
        int c=0;
        while(i<j)
        {
            if(s[i]>s[j])
            {
                c=1;
                break;
            }
            else if(s[i]<s[j])
            {
                break;
            }
            i++;
            j--;
        }
        if(c==1)
        {
            string d=s;
            reverse(s.begin(),s.end());
            s+=d;
        }
        cout<<s<<'\n';
        
    }
    return 0;
}