#include<cstdio>
#include<iostream>
#include<string.h>
using namespace std;
int ne[1000086];
int th[1000086];
int cnt;
int h[1000086];
int q[1000086];
int ans[1000086];
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
		ans[th[i]]=a;
		if(!vis[t]) dfs(t);
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	memset(h,-1,sizeof(h));
	for(int i=1;i<=n;i++)
	{
		int a,b;
		cin>>a>>b;
		ahead(a,b);
	}
	for(int i=n;i>=1;i--)
	{
		dfs(i);
	}
	for(int i=1;i<=n;i++)
	{
		cout<<ans[i]<<' ';
	}
	return 0;
}
 
