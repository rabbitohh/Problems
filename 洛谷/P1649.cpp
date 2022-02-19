#include<bits/stdc++.h>
using namespace std;
char a[200][200];
int b[200][200];
int qx[20000];
int qy[20000];
int gox[10]={0,1,-1,0,0};
int goy[10]={0,0,0,1,-1};
int main()
{
	int n;
	cin>>n;
	int sx,sy;
	int fx,fy;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='A') sx=i,sy=j;
			if(a[i][j]=='B') fx=i,fy=j;
		}
	int h=1,t=1;
	qx[1]=sx,qy[1]=sy;
	b[sx][sy]=1;
	while(t>=h)
	{
		for(int i=1;i<=4;i++)
		{
			int nx=qx[h]+gox[i];
			int ny=qy[h]+goy[i];
			while(1)
			{
				if(b[nx][ny]!=0&&b[nx][ny]!=b[qx[h]][qy[h]]+1||a[nx][ny]=='x'||nx>n||ny>n||nx<1||ny<1) break;
				else 
				{
					b[nx][ny]=b[qx[h]][qy[h]]+1;
					if(a[nx][ny]=='B') cout<<b[nx][ny]-2;
					qx[++t]=nx,qy[t]=ny;
					nx+=gox[i];
					ny+=goy[i];
				}
			}
		}
		h++;
	}
	if(b[fx][fy]==0) cout<<-1;
	//for(int i=1;i<=n;i++)
	//{
	//	for(int j=1;j<=n;j++)
	//	{
	//		cout<<b[i][j]<<' '; 
	//	}
	//	cout<<endl;
	//}
	//else cout<<b[fx][fy]-2;		
} 
