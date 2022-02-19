#include<bits/stdc++.h>
using namespace std;
int main()
{
	double z1,z2,r,w,s;
	cin>>w;
	for(int i=1;i<=w;i++)
	{
		cin>>z1>>z2>>r;
		s+=sqrt(z1*z1+z2*z2)*2/50+r*1.5;
	}
	cout<<ceil(s);
	return 0;
}
