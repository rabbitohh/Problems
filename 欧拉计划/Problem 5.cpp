/*http://pe-cn.github.io/5/
https://projecteuler.net/problem=5*/
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	long long ans=1;
	for(int i=1;i<=10;i++)
	{
		if(i*2>10) ans*=i;
	}
	cout<<ans;
	return 0;
}
