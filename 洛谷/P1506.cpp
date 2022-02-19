#include<bits/stdc++.h>
using namespace std;
char a[2000][2000];
int b[2000][2000];
int d[1000][1000];
int sx,sy,fx,fy,n,m,t;
int ans;
void dfs(int x,int y)
{
	a[x][y]='*';
	if(a[x][y+1]=='0'&&y+1<=m)
		dfs(x,y+1);
	if(a[x][y-1]=='0'&&y-1>=1)
		dfs(x,y-1);
	if(a[x+1][y]=='0'&&x+1<=n)
		dfs(x+1,y);
	if(a[x-1][y]=='0'&&x-1>=1)
		dfs(x-1,y);
}
string s;
int main()
{
	int anss=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		for(int j=1;j<=m;j++)
		{
			a[i][j]=s[j-1];
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i][1]=='0')
		{
			dfs(i,1);
			ans=0;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i][m]=='0')
		{
			dfs(i,m);
			ans=0;
		}
	}
	for(int i=1;i<=m;i++)
	{
		if(a[1][i]=='0')
		{
			dfs(1,i);
			ans=0;
		}
	}
	for(int i=1;i<=m;i++)
	{
		if(a[n][i]=='0')
		{
			dfs(n,i);
			ans=0;
		}
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(a[i][j]=='*') anss++;
	cout<<n*m-anss;
	return 0;
} 
