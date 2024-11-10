#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y,z;
	cin>>x>>y>>z;
	int palyed_match=x+y+z;
	int point1=x+(4-palyed_match);
	int point2=z;
	if(point1>point2)
	{
	    cout<<"Yes\n";
	}
	else
	{
	    cout<<"No\n";
	}	

}
