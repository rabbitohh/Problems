#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int s[200001];
struct QwQ
{
	int from,to;
	int next;
	int time;
}; 
QwQ T[400001];
int head[200001];
struct mem
{
	int a,b,x;
};
mem A[200001];
int q[400001];
int lef,righ;
int du[200001];
int ans[200001];
int cnt;
void add_(int u,int v,int w)
{
	T[++cnt].from=u;
	T[cnt].to=v;
	T[cnt].time=w;
	T[cnt].next=head[u];
	head[u]=cnt;
}
int main()
{
	memset(head,-1,sizeof(head));
	int n,m,c;
	cin>>n>>m>>c;
	for(int i=1;i<=n;i++)
		cin>>s[i];
	for(int i=1;i<=c;i++)
	{
		cin>>A[i].a>>A[i].b>>A[i].x;
		add_(A[i].a,A[i].b,A[i].x);
	}
		
	for(int i=1;i<=c;i++)
		du[A[i].b]++;
	for(int i=1;i<=n;i++)
	{
		ans[i]=s[i];
		if(du[i]==0) q[++righ]=i;
	}
	while(lef<=righ)
	{
		lef++;
		for(int i=head[q[lef]];i!=-1;i=T[i].next)
		{
			ans[T[i].to]=max(ans[T[i].to],ans[q[lef]]+T[i].time);
			if(!--du[T[i].to]) q[++righ]=T[i].to;
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<ans[i]<<"\n";
	}
	return 0;
}

