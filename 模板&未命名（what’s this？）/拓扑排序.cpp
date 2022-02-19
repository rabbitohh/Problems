#include<cstdio>
#include<iostream>
#include<string.h>
#include<queue>
using namespace std;
priority_queue<int,vector<int>,greater<int>> q;
int r[1000086];
int hh,tt=-1;
int n,m;
int h[1000086];
int th[1000086];
int ne[1000086];
int cnt;
void ahead(int a,int b)
{
	th[++cnt]=b;
	ne[cnt]=h[a];
	h[a]=cnt;
	return;
}
int ans[1000086];
int acnt=0;
void topsort()
{
	for(int i=1;i<=n;i++)
	{
		if(!r[i]) q.push(i);
	}
	while(!q.empty())
	{
		int f=q.top();
		ans[++acnt]=f;
		q.pop();
		for(int i=h[f];i!=-1;i=ne[i])
		{
			int t=th[i];
			//fÁ¬Ïòt
			if(--r[t]==0) q.push(t);
		}
	}
	return;
}
int main()
{
	memset(h,-1,sizeof h);
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		r[b]++;
		ahead(a,b);
	}
	topsort();
	if(acnt!=n) cout<<-1;
	else for(int i=1;i<=n;i++)
	{
		cout<<ans[i]<<' ';
	}
	return 0;
}

