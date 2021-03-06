#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
using namespace std;
struct QwQ
{
	int from,to;
	int val;
	int next;
};
QwQ T[1000001];
int cnt;
int head[100001];
void add_(int u,int v,int w)
{
	T[++cnt].from=u;
	T[cnt].to=v;
	T[cnt].val=w;
	T[cnt].next=head[u];
	head[u]=cnt;
}
queue<int>Q;
int vis[100000];
int dis[100000];
int main()
{
	memset(head,-1,sizeof(head));
	for(int i=0;i<100000;i++)
		dis[i]=2147483647;
	int n,m,s;
	cin>>n>>m>>s;
	for(int i=1;i<=m;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		add_(u,v,w);
	}
	Q.push(s);
	vis[s]=1;
	dis[s]=0;
	while(!Q.empty())
	{
		int u=Q.front();
		Q.pop();
		vis[u]=0;
		for(int i=head[u];i!=-1;i=T[i].next)
		{
			if(dis[T[i].to]>dis[u]+T[i].val)
			{
				if(!vis[T[i].to])
					Q.push(T[i].to);
				dis[T[i].to]=dis[u]+T[i].val;
				vis[T[i].to]=1;
			}
			
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<dis[i]<<' ';
	}
	return 0;
}
