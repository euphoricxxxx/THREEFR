#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x, y, z;
		cin>>x>>y>>z;
		if((x+y==z) || (x+y==-z) || (y+z==x) || (y+z==-x) || (x+z==y) || (x+z==-y))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;		
	}
	return 0;
}

