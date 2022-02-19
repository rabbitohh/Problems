#include<bits/stdc++.h>
using namespace std;
int a[10][10];
int b[10][10];
int ans=0;
int n,m;
void dfs(int sum,int x,int y)
{
	if(x==n&&y==m)
	{
		ans=max(ans,sum);
		return;
	} 
	int xx,yy;
	if(y+1>m) xx=x+1,yy=1;
	else xx=x,yy=y+1;
	if(!b[xx-1][yy-1]&&!b[xx-1][yy]&&!b[xx-1][yy+1]&&!b[xx][yy-1])
	{
		b[xx][yy]=1;
		dfs(sum+a[xx][yy],xx,yy);
		b[xx][yy]=0;
	}
	dfs(sum,xx,yy);
}
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>n>>m;
		for(int j=1;j<=n;j++)
			for(int k=1;k<=m;k++)
				cin>>a[j][k];
		dfs(0,1,1);
		b[1][1]=1;
		dfs(a[1][1],1,1);
		b[1][1]=0;
		cout<<ans<<endl;
		for(int j=1;j<=n;j++)
			for(int k=1;k<=m;k++)
				a[j][k]=0;
		ans=0;
	} 
	return 0;
}
