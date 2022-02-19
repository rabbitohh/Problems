#include<cstdio>
#include<iostream>
using namespace std;
int h[10086];
int vis[10086];
int th[10086];
int ne[10086];
int idx;
int maxx,ans;
int dfs(int u)
{
	vis[u]=1;
	int size=0,sum=0;
	for
}
void add(int a,int b)
{
	th[++idx]=b;//idx号节点的值是b
	ne[idx]=h[a]; 
	h[a]=idx;//更新链头 
	return; 
}
int main()
{
	memset(h,-1,sizeof(h));
	int n;
	cin>>n;
	for(int i=1;i<=n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		add(a,b);
		add(b,a); 
	}
	dfs(1);
	cout<<ans;
	return 0;
}
