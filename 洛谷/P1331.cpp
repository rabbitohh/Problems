#include<bits/stdc++.h>
using namespace std;
int sea[2000][2000];
int ans=0;
int n,m;
int gox[10]={1,-1,0,0};
int goy[10]={0,0,1,-1};
bool bad(int a,int b)
{
	int cnt=0;
	if(a==n||b==m) return 0;
	if(sea[a][b]=='#') cnt++;
	if(sea[a+1][b]=='#') cnt++;
	if(sea[a][b+1]=='#') cnt++;
	if(sea[a+1][b+1]=='#') cnt++;
	if(cnt==3) return 1;
	return 0;
}
void bfs(int x,int y)
{
	ans++;
	int qx[20000],qy[20000];
	int h=0,t=0;
	qx[t]=x,qy[t]=y;
	while(h<=t)
	{
		for(int i=0;i<=3;i++)
		{
			if(sea[qx[h]+gox[i]][qy[h]+goy[i]]=='#'&&qx[h]+gox[i]>=1&&qx[h]+gox[i]<=n&&qy[h]+goy[i]>=1&&qy[h]+goy[i]<=m)
			{
				sea[qx[h]+gox[i]][qy[h]+goy[i]]='1';
				qx[++t]=qx[h]+gox[i];
				qy[t]=qy[h]+goy[i];
			}
		}
		h++;
	}
	
}
int main()
{
	cin>>n>>m;
	string s;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		for(int j=1;j<=m;j++)
		{
			sea[i][j]=s[j-1];
		}
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(bad(i,j)==1) 
			{
				cout<<"Bad placement.";
				return 0;
			}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(sea[i][j]=='#') bfs(i,j);
	printf("There are %d ships.",ans);
	return 0;
}
