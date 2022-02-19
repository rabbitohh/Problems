/*https://www.luogu.com.cn/problem/CF545C*/
#include<cstdio>
#include<iostream>
using namespace std;
int size[110000];
int g[110000];
int r[110000];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>g[i]>>size[i];
	}
	if(n==1)
	{
		cout<<1;
		return 0;
	}
	
	int ans=2;//第一颗 最后一颗
	for(int i=2;i<=n-1;i++)
	{
		if(g[i]-size[i]>g[i-1]&&g[i]-size[i]>r[i-1])
		{
			ans++;
		} 
		else if(g[i]+size[i]<g[i+1])
		{
			ans++;
			r[i]=g[i]+size[i];
		}
	} 
	cout<<ans;
	return 0;
}
