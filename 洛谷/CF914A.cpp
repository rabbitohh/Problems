#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int a[2000];
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		if(a[i]<0||int(sqrt(a[i]))*int(sqrt(a[i]))!=a[i]) 
		{
			cout<<a[i];
			return 0;
		}
	}
	return 0;
}

