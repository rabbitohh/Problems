#include<cstdio>
#include<iostream>
using namespace std;
int dp[200086]={-1147483648};
int main()
{
	int n;
	cin>>n;
	int ans=-2147483648;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		dp[i]=max(dp[i-1]+a,a);
		ans=max(ans,dp[i]);
	}
	cout<<ans;
	return 0;
}
