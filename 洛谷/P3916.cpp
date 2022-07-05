#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
struct QwQ
{
	int from;
	int to;
	int next;
};
QwQ T[int(1e5)+1];
int cnt=0;
int head[int(1e5)+1];
void add_(int u,int v)
{
	T[++cnt].from=u;
	T[cnt].to=v;
	T[cnt].next=head[u];
	head[u]=cnt;
}
int ans[int(1e5)+1];
void dfs(int x,int y)
{
	if(ans[x]) return;
	ans[x]=y;
	for(int i=head[x];i!=-1;i=T[i].next)
	{
		dfs(T[i].to,y);	
	}
}
int main()
{
	memset(head,-1,sizeof(head));
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		add_(b,a);
	}
	for(int i=n;i>=1;i--)
	{
		dfs(i,i);
	}
	for(int i=1;i<=n;i++)
	{
		cout<<ans[i]<<' ';
	}
	return 0;
}
