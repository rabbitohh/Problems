#include<cstdio>
#include<iostream>
using namespace std;
int a[100001];
int main()
{
	int n,m;
	cin>>n>>m;
	int maxx=0;
	int minn=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxx=max(maxx,a[i]);
		if(a[minn]>a[i]) minn=i;
	}
	a[minn]=1e9+10;
	for(int i=1;i<=n;i++)
	{
		if(a[i]<maxx)
		{
			m-=(maxx-a[i]);
			a[i]=maxx;
			if(m<0)
			{
				a[i]+=m;
				m=0;
			}
			if(m==0) break;
		}
	}
	unsigned long long sum=0;
	int flag=1;
	for(int i=1;i<=n;i++)
	{
		if(sum>1e9+10&&flag==1)
		{
			flag=0;
			sum-=1e9;
			sum-=10;
		}
	}
	sum-=maxx;
	cout<<sum;
	return 0;
}
