/*WA£¬50·Ö*/
#include<cstdio> 
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int gox[1000]={0,0,0,1,-1};
int goy[1000]={0,1,-1,0,0};
int a[10000][10000];
int main()
{
	int n;
	cin>>n;
	int x,y;
	cin>>x>>y;
	int fx=1;//1ÓÒ 2×ó 3ÏÂ 4ÉÏ 
	int dx=1,dy=1;
	int nnn=2; 
	a[1][1]=1;
	while(nnn<=n*n)
	{
		int nx=dx+gox[fx],ny=dy+goy[fx];
		if(a[nx][ny]==0&&nx<=n&&ny<=n&&nx>=1&&ny>=1) 
		{
			a[nx][ny]=nnn;
			nnn++;
			dx=nx,dy=ny;
		}
		else 
		{
			if(fx==1) fx=3;
			else if(fx==2) fx=4;
			else if(fx==3) fx=2;
			else if(fx==4) fx=1;
			//cout<<nnn<<' '<<fx<<"\n";
		}
	}
	//for(int i=1;i<=n;i++)
	//{
	//	for(int j=1;j<=n;j++)
	//	{
	//		cout<<a[i][j]<<' ';
	//	}
	//	cout<<endl;
	//}
	cout<<a[x][y];
	return 0;
}
