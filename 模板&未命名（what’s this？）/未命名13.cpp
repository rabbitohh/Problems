#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int a[10000][10000];
int idx,h[500086],e[500086],ne[500086];
void add(int a,int b)
{
	e[++idx]=b;
	ne[idx]=h[a];
	h[a]=idx;
	return;
}
int cl[500086];
int cnt1=0,cnt0=0;
int flag=0;
void dg(int n)
{
	if(flag==1) return;
	for(int i=h[n];i!=-1;i=ne[i])
	{
		if(ne[i]==-1) break;
		dg(e[ne[i]]);
		if(cl[e[ne[i]]]!=0x3f3f3f3f&&cl[e[ne[i]]]!=cl[e[i]])
		{
			cout<<"Impossible";
			flag=1;
			return;
		}
		cl[e[ne[i]]]=abs(cl[e[i]]-1); 
		if(cl[e[ne[i]]]==1) cnt1++;
		else cnt0++;
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		add(x,y);
		add(y,x);
	}
	memset(cl,0x3f,sizeof cl);
	cl[1]=1;
	cnt1=1;
	dg(1);
	cout<<min(cnt1,cnt0);
	return 0;
}
