#include<bits/stdc++.h>
using namespace std;
int main()
{
	double R,M,Y,i;
	int m;
	cin>>R>>M>>Y;
	R/=100;
	for(i=1;i<=Y;i++)
	{
		M=M*R+M;
	}
	m=M;
	cout<<m;
	return 0;
}
