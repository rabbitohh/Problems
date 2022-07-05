#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
struct QwQ
{
	int from,to;
	int next;
	int val;
};
QwQ T[100000];
int cnt;
int head[2000];
void add_(int u,int v,int w)
{
	T[++cnt].from=u;
	T[cnt].to=v;
	T[cnt].val=w;
	T[cnt].next=head[u];
	head[u]=cnt;
}
int du[2000];
int q[4000];
int lef,righ;
int ans[4000];
int main()
{
	memset(head,-1,sizeof(head));
	memset(ans,-0x3f,sizeof(ans));
	ans[1]=0;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		add_(a,b,c);
		du[b]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(!du[i]) q[++righ]=i;
	}
	while(lef<=righ)
	{
		lef++;
		for(int i=head[q[lef]];i!=-1;i=T[i].next)
		{
			ans[T[i].to]=max(ans[T[i].to],ans[q[lef]]+T[i].val);
			if(!(--du[T[i].to])) q[++righ]=T[i].to;
		}
	}
	if(ans[n]==ans[0]) cout<<-1;
	else cout<<ans[n];
	//cout<<ans[0];
	return 0;
}

