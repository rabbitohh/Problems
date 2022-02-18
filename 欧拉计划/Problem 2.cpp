#include<cstdio>
#include<iostream>
using namespace std;
int a[100086];
int main()
{
	a[1]=1;
	a[2]=2;
	int sum=2;
	for(int i=3;a[i-1]<=4000000;i++)
	{
		a[i]=a[i-1]+a[i-2];
		if(a[i]%2==0) sum+=a[i];
	}
	cout<<sum;
	return 0;
}
