#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
#include<vector>
using namespace std;
typedef pair<int,int> pii;
typedef vector<pii> vct;
typedef greater<pii> grt;
struct QwQ
{
	int from,to;
	int val;
	int next;
};
QwQ T[400001];
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
priority_queue<pii,vct,grt>q;
int vis[100001];
int dis[100001];
int main()
{
	memset(head,-1,sizeof(head));
	memset(dis,0x3f,sizeof(dis));
	int n,m,s;
	cin>>n>>m>>s;
	for(int i=1;i<=m;i++)
	{
		int a,b,c; 
		cin>>a>>b>>c;
		add_(a,b,c);
	} 
	q.push({0,s});
	dis[s]=0;
	while(!q.empty())
	{
		int u=q.top().second;
		q.pop();
		//cout<<u;
		if(vis[u]) continue;
		vis[u]=1;
		for(int i=head[u];i!=-1;i=T[i].next)
		{
			if((!vis[T[i].to])&&dis[T[i].to]>dis[u]+T[i].val)
			{
				dis[T[i].to]=dis[u]+T[i].val;
				q.push({dis[T[i].to],T[i].to});
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<dis[i]<<' ';
	}
	return 0;
}

