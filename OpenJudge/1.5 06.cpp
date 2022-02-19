#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,da=-1,xiao=100,kua,n,x;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		if(x>da) da=x;
		if(x<xiao) xiao=x;
	}
	kua=da-xiao;
	cout<<kua;
	return 0;
}
