#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int a[1001][1001];
int dp[1001][1001];
int main()
{
	int r;
	cin>>r;
	for(int i=1;i<=r;i++)
		for(int j=1;j<=i;j++)
			cin>>a[i][j];
	dp[1][1]=a[1][1];
	for(int i=2;i<=r;i++)
		for(int j=1;j<=i;j++)
			dp[i][j]=max(max(dp[i][j],dp[i-1][j]),dp[i-1][j-1])+a[i][j];
	int ans=0;
	for(int i=1;i<=r;i++)
	{
		ans=max(ans,dp[r][i]);
	}
	cout<<ans;
	return 0;
} 
