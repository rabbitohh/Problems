/*https://www.luogu.com.cn/problem/P1003*/
#include<iostream>
#include<cstdio>
using namespace std;
int a[100001],b[100001],g[100001],k[100001];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	int x,y;
	cin>>x>>y;
	int br=0;
	while(br==0||n==0)
	{
		if(a[n]<=x&&a[n]+g[n]>=x&&b[n]<=y&&b[n]+k[n]>=y)
		{
			cout<<n;
			br=1;
		}
		n--;
	}
	if(br==0) cout<<-1;
	return 0;	
} 
