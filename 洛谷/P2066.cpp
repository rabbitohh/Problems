#include<bits/stdc++.h>
using namespace std;
int yl[20][20];
int n,m;
int maxx=0;
int ans[10086];
int best[10086];
void dfs(int a,int c,int d)//第a个公司 第a个公司选了b个机器 还剩下c台机器 已经盈利d元 
{
	if(a>n||c==0) 
	{
		if(d>maxx) 
		{
			maxx=d;
			for(int i=1;i<=n;i++)
				best[i]=ans[i];
		}
		return;
	}
	for(int i=0;i<=c;i++)
	{
		ans[a]=i;
		dfs(a+1,c-i,d+yl[a][i]);
		ans[a]=0;
	}
} 
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>yl[i][j];
	dfs(1,m,0);
	cout<<maxx<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<i<<' '<<best[i]<<endl;
	}
	return 0;
}
