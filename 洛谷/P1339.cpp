#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int dist[3000];
int z[3000][3000];
int u[7000],v[7000],w[7000];
int main()
{
	int n,m,s,t;
	cin>>n>>m>>s>>t;
	memset(dist,0x3f,sizeof dist);
	dist[s]=0;
	for(int i=1;i<=m;i++)
	{
		cin>>u[i]>>v[i]>>w[i];
	}
	for(int i=1;i<=n-1;i++)
	{
		for(int j=1;j<=m;j++)
		{
			dist[v[j]]=min(dist[v[j]],dist[u[j]]+w[j]);
			dist[u[j]]=min(dist[u[j]],dist[v[j]]+w[j]);
		}
	}
	cout<<dist[t];
	return 0;
}
