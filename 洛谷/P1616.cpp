#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
long long dp[10000001];
long long v[10000001];
long long c[10000001];
int main()
{
	long long n,V;
	cin>>V>>n;
	for(int i=1;i<=n;i++)
		cin>>v[i]>>c[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=v[i];j<=V;j++)
		{
			dp[j]=max(dp[j],dp[j-v[i]]+c[i]);
		}
	}
	cout<<dp[V];
	return 0;
}
