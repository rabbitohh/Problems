/*http://pe-cn.github.io/10/
https://projecteuler.net/problem=10*/
#include<cstdio>
#include<iostream>
using namespace std; 
bool a[2000001];
int main()
{
	long long sum=0;
	a[0]=a[1]=1;
	for(int i=2;i*i<2000000;i++)
	{
		if(a[i]) continue;
		int k=1;
		while((++k)*i<2000000)
		{
			//cout<<i*k<<' ';
			a[i*k]=1;
		}
	}
	for(int i=1;i<2000000;i++)
	{
		if(!a[i]) sum+=i;
	}
	cout<<sum;
	return 0;
}
