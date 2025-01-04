#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF=1e18+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin>>n>>q;
    set<int> pos;
    pos.insert(0);
    pos.insert(n);
    multiset<int> distance;
    distance.insert(n);
    while(q--)
    {
        int x;
        cin>>x;
        pos.insert(x);
        auto it=pos.find(x);
        it--;
        int prevValue=*it;
        it++;
        it++;
        int nextValue=*it;
        distance.erase(distance.find(nextValue-prevValue));
        distance.insert(x-prevValue);
        distance.insert(nextValue-x);
        cout<<*distance.rbegin()<<" ";
    }
    return 0;
}