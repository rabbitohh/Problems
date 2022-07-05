#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
struct QwQ
{
	int from,to;
	int next;
}; 
QwQ T[400001];
int cnt;
int mcnt=0;
int head[200001];
int Q[200001];
int lef,righ;
int du[200001];
int ans[200001];
int vis[200001];
int lllll[200001]; 
void add_(int u,int v)
{
	T[++cnt].from=u;
	T[cnt].to=v;
	T[cnt].next=head[u];
	head[u]=cnt;
}
void kill_(int x)
{
	if(vis[x]) return;
	vis[x]=1;
	for(int i=head[x];i!=-1;i=T[i].next)
	{
		du[T[i].to]--;
		ans[T[i].to]=max(ans[x]+1,ans[T[i].to]);
	}
	//cout<<x<<' ';
	mcnt++;
}
int main()
{
	memset(head,-1,sizeof(head));
	for(int i=1;i<=200000;i++) ans[i]=1;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		add_(a,b);
		du[b]++;
	}
	while(mcnt<n)
	{
		for(int i=1;i<=n;i++)
		{
			if(du[i]==0&&!lllll[i]) Q[++righ]=i,lllll[i]=1;
		} 
		while(lef<=righ)
		{
			if(lef==0) lef=1;
			kill_(Q[lef]);
			lef++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<ans[i]<<"\n";
	}
	return 0;
}
