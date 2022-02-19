#include<bits/stdc++.h>
using namespace std;
int a[2000][2000];
int flag[2000][2000];
int gox[10]={1,-1,0,0};
int goy[10]={0,0,1,-1};
int n;
void bfs(int x,int y)
{
	int qx[20000],qy[20000];
	int h=0,t=0;
	qx[t]=x,qy[t]=y;
	while(h<=t)
	{
		for(int i=0;i<=3;i++)
		{
			if(flag[qx[h]+gox[i]][qy[h]+goy[i]]==0&&a[qx[h]+gox[i]][qy[h]+goy[i]]==0&&qx[h]+gox[i]>=1&&qx[h]+gox[i]<=n&&qy[h]+goy[i]>=1&&qy[h]+goy[i]<=n)
			{
				flag[qx[h]+gox[i]][qy[h]+goy[i]]=1;
				qx[++t]=qx[h]+gox[i];
				qy[t]=qy[h]+goy[i];
			}
		}
		h++;
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
		if(a[i][1]==0) bfs(i,1);
	for(int i=1;i<=n;i++)
		if(a[i][n]==0) bfs(i,n);
	for(int i=1;i<=n;i++)
		if(a[1][i]==0) bfs(1,i);
	for(int i=1;i<=n;i++)
		if(a[n][i]==0) bfs(n,i);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(flag[i][j]==0&&a[i][j]==0) a[i][j]=2;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cout<<a[i][j]<<' ';
		cout<<endl;
	}
		
	return 0;
} 
