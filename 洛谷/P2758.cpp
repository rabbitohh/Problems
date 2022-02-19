#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
int a[10086];
int b[10086];
int dp[3000][3000];
using namespace std;
int main()
{
	string s;
	cin>>s;
	int s1=s.size();
	for(int i=1;i<=s1;i++)
		a[i]=(int)s[i-1];
	cin>>s;
	int s2=s.size();
	for(int i=1;i<=s2;i++)
		b[i]=(int)s[i-1];
	dp[1][1]=1;
	for(int i=0;i<=s1;i++)
	{
		for(int j=0;j<=s2;j++)
		{
			if(i==0||j==0) dp[i][j]=0x3f3f3f3f;
			else if(i==1&&j==1) continue;
			else if(a[i]==b[j]) 
			{
				dp[i][j]=dp[i-1][j-1];
				if(i==1) dp[i][j]=dp[i][j-1];
				if(j==1) dp[i][j]=dp[i-1][j];
			}
			else dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
		}
	}
	for(int i=1;i<=s1;i++)
	{
		for(int j=1;j<=s2;j++)
		{
			//cout<<dp[i][j]<<' ';
		}
	//	cout<<"\n";
	}
	cout<<dp[s1][s2];
	return 0;
}
