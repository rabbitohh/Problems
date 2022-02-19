#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int dp[1000086];
int main()
{
	int n;
	cin>>n;
	dp[0]=dp[1]=1;
	dp[2]=2;
	for(int i=3;i<=n;i++)
	{
		dp[i]=(2*dp[i-1]+dp[i-3])%10000;
	}
	cout<<dp[n];
	return 0;
}
