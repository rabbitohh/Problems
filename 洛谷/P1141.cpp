#include<bits/stdc++.h>
using namespace std;
int a[2000][2000];
int b[2000][2000];
int c[2000][2000];
int d[1000086][2];
int sx,sy,fx,fy,n,m,t;
int ans;
void dfs(int x,int y)
{
		//cout<<x<<' '<<y<<endl;
	if(b[x][y+1]!=1&&a[x][y+1]!=a[x][y]&&y+1<=n)
	{
			
		ans++;
		b[x][y+1]=1;
		d[ans][0]=x,d[ans][1]=y+1;
		dfs(x,y+1);
	}
	if(b[x][y-1]!=1&&a[x][y-1]!=a[x][y]&&y-1>=1)
	{
		ans++;
		b[x][y-1]=1;
		d[ans][0]=x,d[ans][1]=y-1;
		dfs(x,y-1);
	}
	if(b[x+1][y]!=1&&a[x+1][y]!=a[x][y]&&x+1<=n)
	{
		ans++;
		b[x+1][y]=1;
		d[ans][0]=x+1,d[ans][1]=y;
		dfs(x+1,y);
	}
	if(b[x-1][y]!=1&&a[x-1][y]!=a[x][y]&&x-1>=1)
	{	
		ans++;
		b[x-1][y]=1;
		d[ans][0]=x-1,d[ans][1]=y;
		dfs(x-1,y);
	}
}
string s;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		for(int j=1;j<=n;j++)
		{
			a[i][j]=s[j-1]-'0';
		}
	}
	for(int i=1;i<=m;i++)
	{
		int aa,bb;
		cin>>aa>>bb;
		b[aa][bb]=1;
		if(c[aa][bb]!=0) cout<<c[aa][bb]<<endl;
		else
		{
			dfs(aa,bb);
			cout<<++ans<<endl;
			c[aa][bb]=ans;
			for(int j=1;j<=ans-1;j++)
			{
				c[d[j][0]][d[j][1]]=ans;
				//b[d[j][0]][d[j][1]]=0;
			}
			ans=0;
		}
	}
	return 0;
} 
