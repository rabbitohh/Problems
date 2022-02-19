#include<bits/stdc++.h>
using namespace std;
char a[500][500];//玉米田矩阵 
int b[500][500];//所需时间 
int qx[100000];
int qy[100000];
int gox[10]={0,1,-1,0,0};
int goy[10]={0,0,0,1,-1};
int csx[300][3];
int csy[300][3];
bool vis[500][500];
int main()
{
	int n,m;
	cin>>n>>m;
	string s;
	int sx,sy,fx,fy;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		for(int j=1;j<=m;j++)
		{
			a[i][j]=s[j-1];
			if(a[i][j]=='@') sx=i,sy=j;
			if(a[i][j]=='=') fx=i,fy=j;
			if(a[i][j]>='A'&&a[i][j]<='Z') 
			{
				if(csx[a[i][j]][1]==0) 
				{
					csx[a[i][j]][1]=i;
					csy[a[i][j]][1]=j;
				}
				else 
				{
					csx[a[i][j]][2]=i;
					csy[a[i][j]][2]=j;
				}
			}
		}
	}
	int t=1,h=1;
	vis[sx][sy]=1;
	qx[1]=sx;
	qy[1]=sy;
	b[sx][sy]=0;
	while(t>=h)
	{
		for(int i=1;i<=4;i++)
		{
			int nx=qx[h]+gox[i];
			int ny=qy[h]+goy[i];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m)
			{
				if(a[nx][ny]>='A'&&a[nx][ny]<='Z')
				{
					int ch=a[nx][ny];
					if(nx==csx[ch][1]&&ny==csy[ch][1])
						nx=csx[ch][2],ny=csy[ch][2];
					else
						nx=csx[ch][1],ny=csy[ch][1];
				}
				if (vis[nx][ny]==0)
                {
                   	if (a[nx][ny]!='#')
                   	{
                     	b[nx][ny]=b[qx[h]][qy[h]]+1;
                     	qx[++t]=nx;
                     	qy[t]=ny;
                        vis[nx][ny]=1;
                    }
                }
					
			}
		}
		h++;
	}
	cout<<b[fx][fy];
	return 0;
}
