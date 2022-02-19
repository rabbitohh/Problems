#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int ne[1000086];
int th[1000086];
int cnt;
int h[1000086];
int q[1000086];
int vis[1000086];
void ahead(int a,int b)
{
	th[++cnt]=b;
	ne[cnt]=h[a];
	h[a]=cnt;
	return;
}
void dfs(int a)
{
	vis[a]=1;
	for(int i=h[a];i!=-1;i=ne[i])
	{
		int t=th[i];
		if(!vis[t]) dfs(t);
	}
}
int main()
{
	int n,m;
	memset(h,-1,sizeof(h));
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		ahead(a,b);
	}
	for(int i=1;i<=n;i++)
	{
		dfs(i);
		int maxx=-1;
		for(int i=1;i<=n;i++)
		{
			if(vis[i]) maxx=i;
		}
		cout<<maxx<<' ';
		memset(vis,0,sizeof(vis));
	}
	return 0;
}
