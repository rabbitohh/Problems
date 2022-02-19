#include<cstdio>
#include<iostream>
using namespace std;
int zs(int a)
{
	if(a==2) return 1;
	for(int i=2;i*i<=a;i++)
	{
		if(a%i==0) return 0;
	}
	return 1;
}
int main()
{
	int n;
	cin>>n;
	for(int i=2;;i++)
	{
		if(n%i!=0) continue;
		if(zs(n/i)&&zs(i)) 
		{
			cout<<n/i;
			return 0;
		}
	}
	return 0;
} 
