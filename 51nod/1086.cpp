#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int W[50086],P[50086],num[50086];
int dp[50086];
int main()
{
	int n,w;
	cin>>n>>w;
	for(int i=1;i<=n;i++)
	{
		cin>>W[i]>>P[i]>>num[i];
	}
	dp[0]=0;
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=num[i];k++)
		{
			for(int j=w;j>=W[i];j--)
			{
				dp[j]=max(dp[j],dp[j-W[i]]+P[i]);
			}
		}
	}
	cout<<dp[w];
	return 0;
}
