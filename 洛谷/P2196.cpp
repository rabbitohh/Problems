#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int a[10086];
int ma[30][30];
int dp[30];
int g[30];
void dg(int d)
{
	if(g[d]==0) 
	{
		cout<<d<<' ';
		return;	
	}
	else 
	{
		dg(g[d]);
		cout<<d<<' ';
	}
	
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];	
	for(int i=1;i<=n-1;i++)
	{
		dp[i]=max(dp[i],a[i]);
		for(int j=i+1;j<=n;j++)
		{
			bool b;
			cin>>b; 
			if(b&&(dp[i]+a[j]>dp[j])) dp[j]=dp[i]+a[j],g[j]=i;
		}
	}
		
	int ans=1;
	for(int i=1;i<=n;i++)
		if(dp[ans]<dp[i]) ans=i;
	dg(ans);
	cout<<endl<<dp[ans];
	return 0;	
} 
