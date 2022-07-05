#include<iostream>
#include<cstdio>
using namespace std;
struct QwQ
{
	int from,to;
	int next;
};
QwQ T[600001];
int cnt;
int head[100001];
void add_(int u,int v)
{
	T[++cnt].from=u;
	T[cnt].to=v;
	T[cnt].next=head[u];
	head[u]=cnt;
}
int rudu[100001];
int chudu[100001];
short kind[100001];//-1为起点，0位中间，1为终点 
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int d;
		cin>>d;
		for(int j=1;j<=d;j++)
		{
			int a;
			cin>>a;
			add_(i,a);
			rudu[a]++;
			chudu[i]++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(!rudu[i]) kind[i]=-1;
		if(!chudu[i]) kind[i]=1;
	}
	return 0;
}

