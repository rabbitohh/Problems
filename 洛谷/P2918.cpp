#include<bits/stdc++.h>
using namespace std;
int v[100086],w[100086],dp[100086];
int main()
{
	int n,h;
	cin>>n>>h;
	  //for(int i=1;i<=100;i++)
	{
		for(int j=1;j<=100085;j++)
		{
			dp[j]=1000000000;
		}
	}
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];	
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=v[i];j<=h+5000;j++)
		{
			dp[j]=min(dp[j],dp[j-v[i]]+w[i]);
		}
	} 
	int ans=2147483647;
	for(int i=h;i<=h+5000;i++)
	{
		ans=min(ans,dp[i]);
	}
	cout<<ans;
}
