#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,da=-1,n,x;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		if(x>da) da=x;
	}
	cout<<da;
	return 0;
}
