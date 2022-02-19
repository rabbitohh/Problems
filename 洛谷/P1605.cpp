#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int b[100][100];
int sx,sy,fx,fy,n,m,t;
int ans;
void dfs(int x,int y)
{
	if(x==fx&&y==fy)
	{
		ans++;
		return;
	}
	{
		if(b[x][y+1]!=1&&a[x][y+1]!=2&&y+1<=m)
		{
			b[x][y+1]=1;
			dfs(x,y+1);
			b[x][y+1]=0;
		}
		if(b[x][y-1]!=1&&a[x][y-1]!=2&&y-1>=1)
		{
			b[x][y-1]=1;
			dfs(x,y-1);
			b[x][y-1]=0;
		}
		if(b[x+1][y]!=1&&a[x+1][y]!=2&&x+1<=m)
		{
			b[x+1][y]=1;
			dfs(x+1,y);
			b[x+1][y]=0;
		}
		if(b[x-1][y]!=1&&a[x-1][y]!=2&&x-1>=1)
		{
			b[x-1][y]=1;
			dfs(x-1,y);
			b[x-1][y]=0;
		}
	}
}
int main()
{
	cin>>n>>m;
	cin>>t;
	cin>>sx>>sy;
	cin>>fx>>fy;
	for(int i=1;i<=t;i++)
	{
		int x,y;
		cin>>x>>y;
		a[x][y]=2;
	}
	b[sx][sy]=1;
	dfs(sx,sy);
	cout<<ans;
	return 0;
} 
