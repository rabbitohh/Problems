#include<bits/stdc++.h>
using namespace std;
char a[2000][2000];
int n,m;
int ans=0;
void dfs(int x,int y)
{
	a[x][y]='.';
	if(a[x][y+1]=='W'&&y+1<=m)
		dfs(x,y+1);
	if(a[x][y-1]=='W'&&y-1>=1)
		dfs(x,y-1);
	if(a[x+1][y]=='W'&&x+1<=n)
		dfs(x+1,y);
	if(a[x-1][y]=='W'&&x-1>=1)
		dfs(x-1,y);
	if(a[x+1][y+1]=='W'&&y+1<=m&&x+1<=n)
		dfs(x+1,y+1);
	if(a[x-1][y-1]=='W'&&y-1>=1&&x-1>=1)
		dfs(x-1,y-1);
	if(a[x+1][y-1]=='W'&&x+1<=n&&y-1>=1)
		dfs(x+1,y-1);	
	if(a[x-1][y+1]=='W'&&x-1>=1&&y+1<=m)
		dfs(x-1,y+1);
}
string s;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		for(int j=1;j<=m;j++)
			a[i][j]=s[j-1];
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(a[i][j]=='W')
			{
				dfs(i,j);
				ans++;
			}
	cout<<ans;
	return 0;
} 
