#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int oldd[10][10];
int neww[10][10];
int ans=0x3f3f3f;
bool vis[10][10][10][10];
bool check()
{
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=4;j++)
		{
			if(oldd[i][j]!=neww[i][j]) return 0;
		}
	}
	return 1;
}
void dfs(int x1,int y1,int x2,int y2,int num)
{
	//cout<<x1<<' '<<y1<<' '<<x2<<' '<<y2<<' '<<num<<endl;
	if(x1>4||x1<1||x2>4||x2<1||y1>4||y1<1||y2>4||y2<1)
	{
		vis[x1][y1][x2][y2]=0;
		return;
	}
	vis[x1][y1][x2][y2]=1;
	if(check()) 
	{
		ans=min(ans,num);
		vis[x1][y1][x2][y2]=0;
		return;
	}
	if(num>=ans)
	{
		vis[x1][y1][x2][y2]=0;
		return;
	}
	if(oldd[x1][y1]==neww[x1][y1])
	{
		if(!vis[x1+1][y1][x2][y2]) dfs(x1+1,y1,x2,y2,num);
		if(!vis[x1][y1+1][x2][y2]) dfs(x1,y1+1,x2,y2,num);
	}
	else if(oldd[x2][y2]==neww[x2][y2])
	{
		if(!vis[x1][y1][x2+1][y2]) dfs(x1,y1,x2+1,y2,num);
		if(!vis[x1][y1][x2][y2+1]) dfs(x1,y1,x2,y2+1,num);
	}
	else 
	{
		oldd[x1][y1]=!oldd[x1][y1];
		oldd[x2][y2]=!oldd[x2][y2];
		if(!vis[x1+1][y1][x2+1][y2]) dfs(x1+1,y1,x2+1,y2,num+abs(x1-x2)+abs(y1-y2));
		if(!vis[x1][y1+1][x2+1][y2]) dfs(x1,y1+1,x2+1,y2,num+abs(x1-x2)+abs(y1-y2));
		if(!vis[x1+1][y1][x2][y2+1]) dfs(x1+1,y1,x2,y2+1,num+abs(x1-x2)+abs(y1-y2));
		if(!vis[x1][y1+1][x2][y2+1]) dfs(x1,y1+1,x2,y2+1,num+abs(x1-x2)+abs(y1-y2));
		if(!vis[x1+1][y1][x2][y2]) dfs(x1+1,y1,x2,y2,num+abs(x1-x2)+abs(y1-y2));
		if(!vis[x1][y1+1][x2][y2]) dfs(x1,y1+1,x2,y2,num+abs(x1-x2)+abs(y1-y2));
		if(!vis[x1][y1][x2+1][y2]) dfs(x1,y1,x2+1,y2,num+abs(x1-x2)+abs(y1-y2));
		if(!vis[x1][y1][x2][y2+1]) dfs(x1,y1,x2,y2+1,num+abs(x1-x2)+abs(y1-y2));
		oldd[x1][y1]=!oldd[x1][y1];
		oldd[x2][y2]=!oldd[x2][y2];
	}
	vis[x1][y1][x2][y2]=0;
}
int main()
{
	freopen("board.in","r",stdin);
	freopen("board.out","w",stdout);
	ios::sync_with_stdio(false);
	string s;
	for(int i=1;i<=4;i++)
	{
		cin>>s;
		for(int j=0;j<=3;j++)
		{
			oldd[i][j+1]=s[j]-'0';
		}
	}
	for(int i=1;i<=4;i++)
	{
		cin>>s;
		for(int j=0;j<=3;j++)
		{
			neww[i][j+1]=s[j]-'0';
		}
	}
	dfs(1,1,1,1,0);
	if(ans<10) cout<<ans;
	else 
	{
		ans=0;
		for(int i=1;i<=4;i++)
		{
			for(int j=1;j<=4;j++)
			{
				if(neww[i][j]!=oldd[i][j]) ans++;
			}
		}
		cout<<ans/2;
	}
	return 0;
}
