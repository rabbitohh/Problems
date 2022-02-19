#include<bits/stdc++.h>
using namespace std;
int qx[300000];
int qy[300000];
int gox[10]={0,1,-1,0,0};
int goy[10]={0,0,0,1,-1};
int a[600][600];
int main()
{
	int x,y;
	int aaa,b;
	cin>>x>>y>>aaa>>b;
	int t=0,h=1;
	for(int i=1;i<=x;i++)
		for(int j=1;j<=y;j++)
			a[i][j]=300000;
	for(int i=1;i<=aaa;i++)
	{
		t++;
		cin>>qx[t]>>qy[t];
		a[qx[t]][qy[t]]=0;
	}
	while(h<=t)
	{
		for(int i=1;i<=4;i++)
		{
			if(qx[h]+gox[i]>=1&&qx[h]+gox[i]<=x&&qy[h]+goy[i]>=1&&qy[h]+goy[i]<=y)
				if(a[qx[h]+gox[i]][qy[h]+goy[i]]>a[qx[h]][qy[h]]+1)
				{
					qx[++t]=qx[h]+gox[i];
					qy[t]=qy[h]+goy[i];
					a[qx[h]+gox[i]][qy[h]+goy[i]]=a[qx[h]][qy[h]]+1;					
				}	
		}
		h++;
	}
	for(int i=1;i<=b;i++)
	{
		int aa,bb;
		cin>>aa>>bb;
		cout<<a[aa][bb]<<endl;
	}	
} 
