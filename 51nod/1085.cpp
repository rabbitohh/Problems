#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int W[10086],P[10086];
int dp[20086];//取第几件物体 体积为几 能够创造多少价值 
int main()
{
	int n,w;
	cin>>n>>w;
	for(int i=1;i<=n;i++)
	{
		cin>>W[i]>>P[i];
	}
	dp[0]=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=w;j>=W[i];j--)
		{
			if(j-W[i]>=0) dp[j]=max(dp[j],dp[j-W[i]]+P[i]);
		}
	}
	cout<<dp[w];
	return 0;
}
