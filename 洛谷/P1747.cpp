#include<bits/stdc++.h>
using namespace std;
int qx[170000];
int qy[170000];
int gox[20]={0,1,-1,1,-1,2,2,-2,-2,2,-2,2,-2};
int goy[20]={0,2,2,-2,-2,1,-1,1,-1,2,-2,-2,2};
int a[500][500];
int main()
{
	int x=20,y=20;
	int sx,sy;
	cin>>sx>>sy;
	int t=1,h=1;
	qx[t]=sx;
	qy[t]=sy;
	for(int i=1;i<=x;i++)
		for(int j=1;j<=y;j++)
			a[i][j]=10000;
	a[sx][sy]=0;
	while(h<=t)
	{
		for(int i=1;i<=12;i++)
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
	cout<<a[1][1]<<endl;
	t=1;h=1;
	for(int i=1;i<=x;i++)
		for(int j=1;j<=y;j++)
			a[i][j]=0;
	for(int i=1;i<=1000;i++)
	{
		qx[i]=0;qy[i]=0;
	}
	cin>>sx>>sy;
	t=1,h=1;
	qx[t]=sx;
	qy[t]=sy;
	for(int i=1;i<=x;i++)
		for(int j=1;j<=y;j++)
			a[i][j]=10000;
	a[sx][sy]=0;
	while(h<=t)
	{
		for(int i=1;i<=12;i++)
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
	cout<<a[1][1];
} 
