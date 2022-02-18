/*http://pe-cn.github.io/3/
https://projecteuler.net/problem=3*/
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
bool su(long long a)
{
	int s=sqrt(a);
	for(int i=2;i<=s;i++)
		if(a%i==0) return 0;
	return 1;
}
int main()
{
	long long a=600851475143;
	for(int i=2;;i++)
	{
		if(a%i==0)
		{
			a/=i;
			i=2;
		}
		if(su(a))
		{
			cout<<a;
			break;
		}
	}
	return 0;
}
