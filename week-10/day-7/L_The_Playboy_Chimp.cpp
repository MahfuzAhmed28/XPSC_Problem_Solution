#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        auto down=lower_bound(v.begin(),v.end(),x);
        auto up=upper_bound(v.begin(),v.end(),x);
        if(down==v.begin())
        {
            cout<<"X ";
        }
        else
        {
            down--;
            cout<<*down<<" ";
        }
        if(up==v.end())
        {
            cout<<"X\n";
        }
        else
        {
            cout<<*up<<'\n';
        }
    }
    return 0;
}
