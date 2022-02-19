#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int gox[10]={0,1,-1,0,0};
int goy[10]={0,0,0,1,-1};
int a[200][200];
struct aba
{
	int xx,yy;
};
bool cmp(aba x,aba y)
{
	return a[x.xx][x.yy]>a[y.xx][y.yy];
}
int ma[200][200]; 
aba ab[10086];
int main()
{
	int x,y;
	cin>>x>>y;
	int cnt=0;
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=y;j++)
		{
			cin>>a[i][j];
			ab[++cnt].xx=i;
			ab[cnt].yy=j;
			ma[i][j]=1;
		}
	}
	sort(ab+1,ab+cnt+1,cmp);
	for(int i=1;i<=cnt;i++)
	{
		for(int j=1;j<=4;j++)
		{
			int nx=ab[i].xx+gox[j];
			int ny=ab[i].yy+goy[j];
			if(nx>0&&nx<=x&&ny>0&&ny<=y&&a[ab[i].xx][ab[i].yy]>a[nx][ny])
			{
				ma[nx][ny]=max(ma[nx][ny],ma[ab[i].xx][ab[i].yy]+1);
			}
		}
	} 
	int ans=0;
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=y;j++)
		{
			ans=max(ans,ma[i][j]);
			//cout<<ma[i][j]<<' ';
		}
		//cout<<endl;
	}
	cout<<ans;
	return 0;
} 
