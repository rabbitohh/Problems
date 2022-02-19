#include<cstdio>
#include<iostream>
#include<string.h>
using namespace std;
int ne[10086];
int th[10086];
int cnt;
int h[10086];
int q[10086];
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
void bfs(int a)
{
	int hh,tt;
	hh=tt=0;
	q[0]=a;			
	vis[a]=1;
	while(hh<=tt)
	{
		int f=q[hh++];
		for(int i=h[f];i!=-1;i=ne[i])
		{
			int t=th[i];
			q[++tt]=t;
			vis[t]=1;
		}
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	memset(h,-1,sizeof h);
	for(int i=1;i<=n;i++)
	{
		int a,b;
		cin>>a>>b;
		ahead(a,b);
		ahead(b,a);
	}
	return 0;
}
 
