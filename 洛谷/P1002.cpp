/*https://www.luogu.com.cn/problem/P1002*/
#include<cstdio>
#include<iostream>
using namespace std;
int ma[100][100];
long long dp[100][100];
int gx[10]={0,1,2,1,2,-1,-2,-1,-2};
int gy[10]={0,2,1,-2,-1,2,1,-2,-1};;
int main()
{
	int fx,fy,mx,my;
	cin>>fx>>fy>>mx>>my;
	ma[mx][my]=1;
	for(int i=1;i<=8;i++)
	{
		if(mx+gx[i]>=0&&mx+gx[i]<=fx&&my+gy[i]>=0&&my+gy[i]<=fy)
			ma[mx+gx[i]][my+gy[i]]=1;
	}
	dp[0][0]=1;
	for(int i=0;i<=fx;i++)
		for(int j=0;j<=fy;j++)
		{
			if(i==0&&j==0) continue;
			if(ma[i][j]) dp[i][j]=0;
			else if(i==0) dp[i][j]=dp[i][j-1];
			else if(j==0) dp[i][j]=dp[i-1][j];
			else dp[i][j]=dp[i-1][j]+dp[i][j-1];
		}
    for(int i=0;i<=fx;i++)
	{
		for(int j=0;j<=fy;j++)
		{
		//	printf("%12d ",dp[i][j]);
		}
		//cout<<endl;
	}
	cout<<dp[fx][fy];
	return 0;
}
