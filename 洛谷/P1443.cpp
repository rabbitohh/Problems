#include<bits/stdc++.h>
using namespace std;
int qx[170000];
int qy[170000];
int gox[10]={0,1,-1,1,-1,2,2,-2,-2};
int goy[10]={0,2,2,-2,-2,1,-1,1,-1};
int a[500][500];
int main()
{
	int x,y;
	int sx,sy;
	cin>>x>>y>>sx>>sy;
	int t=1,h=1;
	qx[t]=sx;
	qy[t]=sy;
	for(int i=1;i<=x;i++)
		for(int j=1;j<=y;j++)
			a[i][j]=10000;
	a[sx][sy]=0;
	while(h<=t)
	{
		for(int i=1;i<=8;i++)
		{
			if(a[qx[h]+gox[i]][qy[h]+goy[i]]>a[qx[h]][qy[h]]+1)
				if(qx[h]+gox[i]>=1&&qx[h]+gox[i]<=x&&qy[h]+goy[i]>=1&&qy[h]+goy[i]<=y)
				{
					qx[++t]=qx[h]+gox[i];
					qy[t]=qy[h]+goy[i];
					a[qx[h]+gox[i]][qy[h]+goy[i]]=a[qx[h]][qy[h]]+1;					
				}	
		}
		h++;
	}
	for(int i=1;i<=x;i++)
		for(int j=1;j<=y;j++)
			if(a[i][j]==10000) a[i][j]=-1;
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=y;j++)
			printf("%-5d",a[i][j]);
		cout<<endl;
	}
		
} 
