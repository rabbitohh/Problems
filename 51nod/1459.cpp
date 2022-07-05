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
int getscore[100000];
int score[1000];
int main()
{
	memset(head,-1,sizeof(head));
	memset(dis,0x3f,sizeof(dis));
	int n,m,start,end;
	cin>>n>>m>>start>>end;
	for(int i=0;i<n;i++)
	{
		cin>>score[i];
	}
	for(int i=1;i<=m;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		add_(x,y,z);
		add_(y,x,z);
	}
	dis[start]=0;
	vis[start]=1;
	getscore[start]=score[start];
	Q.push(start);
	while(!Q.empty())
	{
		int u=Q.front();
		Q.pop();
		vis[u]=0;
		for(int i=head[u];i!=-1;i=T[i].next)
		{
			if(dis[T[i].to]>dis[u]+T[i].val)
			{
				dis[T[i].to]=dis[u]+T[i].val;
				getscore[T[i].to]=getscore[u]+score[T[i].to];
				if(!vis[T[i].to]) 
				{
					vis[T[i].to]=1;
					Q.push(T[i].to);
				}
			}
			else if(dis[T[i].to]==dis[u]+T[i].val)
			{
				getscore[T[i].to]=max(getscore[u]+score[T[i].to],getscore[T[i].to]);
			}
		}
	}
	cout<<dis[end]<<' '<<getscore[end];
	return 0;
}
