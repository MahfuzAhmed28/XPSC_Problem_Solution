#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    deque<ll> dq(n);
    ll sereja=0,dima=0;
    for(int i=0;i<n;i++)
    {
        cin>>dq[i];
    }
    int turn=1;
    while(dq.size()!=0)
    {
        if(turn==1)
        {
            if(dq.front()>dq.back())
            {
                sereja+=dq.front();
                dq.pop_front();
            }
            else
            {
                sereja+=dq.back();
                dq.pop_back();
            }
            turn=0;
        }
        else
        {
            if(dq.front()>dq.back())
            {
                dima+=dq.front();
                dq.pop_front();
            }
            else
            {
                dima+=dq.back();
                dq.pop_back();
            }
            turn=1;
        }
    }
    cout<<sereja<<" "<<dima;


    return 0;
}