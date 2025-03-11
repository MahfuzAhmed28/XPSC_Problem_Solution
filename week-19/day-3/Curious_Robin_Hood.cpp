#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long int

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long int INF=1e18+5;
const int maxN=1e5+5;
vector<ll> v(maxN),t(4*maxN);
ll ans;
void build(int n,int b,int e)
{
    if(b==e)
    {
        t[n]=v[b];
        return;
    }
    int mid=(b+e)/2,l=2*n,r=(2*n)+1;
    build(l,b,mid);
    build(r,mid+1,e);
    t[n]=t[l]+t[r];
}
void update(int n,int b,int e,int i,int x,int com)
{
    if(i<b || i>e)
    {
        return;
    }
    if(b==e)
    {
        if(com==1)
        {
            t[n]=x;
        }
        else
        {
            t[n]+=x;
        }
        return;
    }
    int mid=(b+e)/2,l=2*n,r=(2*n)+1;
    update(l,b,mid,i,x,com);
    update(r,mid+1,e,i,x,com);
    t[n]=t[l]+t[r];
}
ll query(int n,int b,int e,int i,int j)
{
    if(i>e || j<b)
    {
        return 0;
    }
    if(i<=b && j>=e)
    {
        return t[n];
    }
    int mid=(b+e)/2,l=2*n,r=(2*n)+1;
    return query(l,b,mid,i,j)+query(r,mid+1,e,i,j);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt;
    cin>>tt;
    int c=1;
    while(c<=tt)
    {
        cout<<"Case "<<c<<":\n";
        int n,q;
        cin>>n>>q;
        v.clear();
        t.clear();
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        build(1,1,n);

        while(q--)
        {
            int com;
            cin>>com;
            if(com==1)
            {
                int idx;
                cin>>idx;
                idx++;
                ll res=query(1,1,n,idx,idx);
                update(1,1,n,idx,0,com);
                cout<<res<<'\n';
            }
            if(com==2)
            {
                int idx,x;
                cin>>idx>>x;
                idx++;
                update(1,1,n,idx,x,com);
            }
            if(com==3)
            {
                int l,r;
                cin>>l>>r;
                l++,r++;
                ll res=query(1,1,n,l,r);
                cout<<res<<'\n';
            }
        }
        c++;

    }
    return 0;
}
