#include<cstdio>
#include<iostream>
#include<queue>
#include<cstring>
#include<cmath>
using namespace std;
typedef pair<int,int>pii;
int n,m,s;
int idx,h[500086],e[500086],w[500086],ne[500086];
int dis[500086];
bool st[500086];
void add(int a,int b,int c)
{
	e[++idx]=b;
	w[idx]=c;
	ne[idx]=h[a];
	h[a]=idx;
	return;
}
void dj()
{
	memset(dis,0x3f,sizeof(dis));
	priority_queue<pii,vector<pii>,greater<pii> >heap;
	pair<int,int>f;
	dis[s]=0;
	heap.push({0,s});
	while(!heap.empty())
	{
		f=heap.top();
		heap.pop();
		if(!st[f.second])
		{
			int u=f.second;
			st[u]=1;
			int v=f.first;
			for(int i=h[u];i!=-1;i=ne[i])
			{
				int j=e[i];
				if(dis[j]>v+w[i])
				{
					dis[j]=v+w[i];
					heap.push({dis[j],j});
				}
			}
		}
	}
}
int main()
{
	memset(h,-1,sizeof(h));
	cin>>n>>m>>s;
	for(int i=1;i<=m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		add(a,b,c);
	}
	dj();
	for(int i=1;i<=n;i++)
	{
		if(dis[i]==0x3f3f3f3f) cout<<2147483647<<' ';
		else cout<<dis[i]<<' ';
	}
	return 0;
}
