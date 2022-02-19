/*WA£¬0·Ö*/
#include<cstdio>
#include<iostream>
#include<string.h>
using namespace std;
int ne[2000086];
int th[2000086];
int cnt;
int h[2000086];
int q[2000086];
int vis[2000086]; 
void dfs(int a)
{
	vis[a]=1;
	cout<<a<<' ';
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
	cout<<a<<' ';
	while(hh<=tt)
	{
		int f=q[hh++];
		for(int i=h[f];i!=-1;i=ne[i])
		{
			int t=th[i];
			if(vis[t]) continue;
			q[++tt]=t;
			vis[t]=1;
			cout<<t<<' ';
		}
	}
}
void ahead(int a,int b)
{
	th[++cnt]=b;
	ne[cnt]=h[a];
	h[a]=cnt;
	return;
}
void add(int a,int b)
{
	th[++cnt]=b;
	int flag=0;
	for(int i=h[a];i!=-1;i=ne[i])
	{
		if(ne[i]!=-1&&b<=ne[i]) 
		{
			ne[cnt]=ne[i];
			ne[i]=cnt;
			return;	
		}	
		flag=i;
	}	
	ne[cnt]=-1;
	ne[flag]=cnt;
} 
int main()
{
	memset(h,-1,sizeof(h));
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		if(h[a]==-1||b<=th[h[a]]) ahead(a,b);
		else add(a,b);
	}
	dfs(1);
	memset(vis,0,sizeof(vis));
	cout<<endl;
	bfs(1);
	return 0;
}
 
