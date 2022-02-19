#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int a[1001][1001];
int dp[1001][1001];
int main()
{
	//freopen("bear.in","r",stdin);
	//freopen("bear.out","w",stdout);
	ios::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	memset(dp,-0x3f,sizeof(dp));
	for(int i=1;i<=n;i++)
	{
		if(i==1) dp[i][1]=a[i][1];
		else dp[i][1]=dp[i-1][1]+a[i][1];
	}
	for(int j=2;j<=m;j++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int k=1;k<=n;k++)
			{
				int sum=0;
				int l=min(i,k);                                                                                                                                                                                                        
				int r=max(i,k);
				for(int k2=l;k2<=r;k2++)
					sum+=a[k2][j];
				sum+=dp[k][j-1];
				dp[i][j]=max(sum,dp[i][j]);
			}
		}
	}
	cout<<dp[n][m];
	return 0;
}
