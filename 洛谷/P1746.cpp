#include<bits/stdc++.h>
using namespace std;
int qx[3000000];
int qy[3000000];
int gox[10]={0,1,-1,0,0};
int goy[10]={0,0,0,1,-1};
int a[1100][1100];
int b[1100][1100];
int main()
{
	int n;
	cin>>n;
	int x=n,y=n;
	int sx,sy,fx,fy;
	string s;
	for(int i=1;i<=n;i++)
	{
		string s;
		cin>>s;
		for(int j=1;j<=n;j++)
		{
			b[i][j]=s[j-1]-'0';
		}
	}
	cin>>sx>>sy>>fx>>fy;
	int t=1,h=1;
	for(int i=1;i<=x;i++)
		for(int j=1;j<=y;j++)
			a[i][j]=3000000;
	a[sx][sy]=0;
	qx[1]=sx;
	qy[1]=sy;
	while(h<=t)
	{
		for(int i=1;i<=4;i++)
		{
			if(b[qx[h]+gox[i]][qy[h]+goy[i]]==0&&qx[h]+gox[i]>=1&&qx[h]+gox[i]<=x&&qy[h]+goy[i]>=1&&qy[h]+goy[i]<=y)
				if(a[qx[h]+gox[i]][qy[h]+goy[i]]>a[qx[h]][qy[h]]+1)
				{
					qx[++t]=qx[h]+gox[i];
					qy[t]=qy[h]+goy[i];
					a[qx[h]+gox[i]][qy[h]+goy[i]]=a[qx[h]][qy[h]]+1;					
				}	
		}
		h++;
	}
	cout<<a[fx][fy]<<endl;
} 
