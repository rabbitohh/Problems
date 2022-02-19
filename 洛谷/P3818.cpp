/*WA£¬90·Ö*/
#include<bits/stdc++.h>
using namespace std;
char a[5000][5000];
int timea[5000][5000];
int timeb[5000][5000];
int timec[5000][5000];
int qx[1000086];
int qy[1000086];
int gox[10]={0,1,-1,0,0};
int goy[10]={0,0,0,1,-1};
int main()
{
	int h,w,d,r;
	cin>>h>>w>>d>>r;
	gox[5]=d,goy[5]=r;
	string s;
	for(int i=1;i<=h;i++)
	{
		cin>>s;
		for(int j=1;j<=w;j++)
			a[i][j]=s[j-1];
	}
	int head=1,tail=1;
	qx[1]=1,qy[1]=1;
	timea[1][1]=0;
	while(head<=tail)
	{
		for(int i=1;i<=5;i++)
		{
			int nx,ny;
			nx=qx[head]+gox[i];
			ny=qy[head]+goy[i];
			if(nx>=1&&nx<=h&&ny>=1&&ny<=w&&a[nx][ny]=='.'&&(timea[nx][ny]>timea[qx[head]][qy[head]]+1||(timea[nx][ny]==0&&(ny!=1||nx!=1)))) 
			{
				if(i==5) timeb[nx][ny]=timea[qx[head]][qy[head]]+1;
				else qx[++tail]=nx,qy[tail]=ny,timea[nx][ny]=timea[qx[head]][qy[head]]+1;
			}
		}
		head++;
	}
	int ans=timea[h][w];
	if(ans==0) ans=2147483647;
	head=1,tail=1;
	for(int i=1;i<=1000000;i++)
		qx[i]=1,qy[i]=1;
	for(int i=1;i<=2000;i++)
		for(int j=1;j<=2000;j++)
			timea[i][j]=0;
	qx[1]=h,qy[1]=w;
	while(head<=tail)
	{
		for(int i=1;i<=4;i++)
		{
			int nx,ny;
			nx=qx[head]+gox[i];
			ny=qy[head]+goy[i];
			if(nx>=1&&nx<=h&&ny>=1&&ny<=w&&a[nx][ny]=='.'&&(timec[nx][ny]>timec[qx[head]][qy[head]]+1||(timec[nx][ny]==0&&(ny!=h||nx!=w)))) 
			{
				qx[++tail]=nx;
				qy[tail]=ny;
				timec[nx][ny]=timec[qx[head]][qy[head]]+1;
				if(timeb[nx][ny]!=0) ans=min(ans,timec[nx][ny]+timeb[nx][ny]);
			}
		}
		head++;
	}
	if(ans==2147483647) ans=-1;
	cout<<ans;
	return 0;
}
