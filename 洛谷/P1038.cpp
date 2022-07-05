#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
struct QwQ
{
	int from,to;
	int val;
	int next;
};
QwQ T[10001];
int c[200],u[200];
int cnt;
int head[200];
void add_(int u,int v,int w)
{
	T[++cnt].from=u;
	T[cnt].to=v;
	T[cnt].val=w;
	T[cnt].next=head[u];
	head[u]=cnt;
}
int kind[200];//1´ú±íÊä³ö²ã 
int du[200];//chu
int du2[200];
int q[500];
int lef,righ;
int ceng[200];
int main()
{
	memset(head,-1,sizeof(head));
	int n,p;
	cin>>n>>p;
	for(int i=1;i<=n;i++)
	{
		cin>>c[i]>>u[i];
		if(!c[i]) c[i]-=u[i];
	}
	for(int i=1;i<=p;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		add_(u,v,w); 
		du[u]++;
		du2[v]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(!du[i]) kind[i]=1;
		if(!du2[i]) q[++righ]=i,ceng[i]=1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=head[i];j!=-1;j=T[j].next)
		{
			ceng[T[j].to]=ceng[i]+1;
		}
	}
	int now=1;
	while(lef<=righ)
	{
		for(int i=1;i<=n;i++)
			if(ceng[i]==now) q[++righ]=i;
		lef++;
		if(c[q[lef]]>0)
		{
			for(int i=head[q[lef]];i!=-1;i=T[i].next)
			{
				c[T[i].to]+=(T[i].val*c[q[lef]]);
			}
		}
		now=ceng[T[head[lef+1]].to]-1;
	}
	int flag=0;
	for(int i=1;i<=n;i++)
	{
		if(!kind[i]) continue;
		if(c[i]<=0) continue;
		cout<<i<<' '<<c[i]<<'\n';
		flag=1;
	}
	if(!flag) cout<<"NULL";
	return 0;
}

