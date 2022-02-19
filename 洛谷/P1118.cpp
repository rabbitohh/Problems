#include<cstdio>
#include<iostream>
using namespace std;
int q[20][20];
int ans[20];
bool us[20000];
int n,k;
int flag=0;
void dg(int num,int sum)
{
	//cout<<num;
	//cout<<num<<' ';
	if(flag==1) return;
	if(num>n)
	{
		if(sum==k) for(int i=1;i<=n;i++)
		{
			cout<<ans[i]<<' ';
			flag=1;
		}
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(!us[i])
		{
			ans[num]=i;
			us[i]=1;
			dg(num+1,sum+i*q[n][num]);
			us[i]=0;
		}
	}
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j==1||j==i) q[i][j]=1;
			else q[i][j]=q[i-1][j]+q[i-1][j-1];
		}
	}
	dg(1,0);//选第几个数，和为几 
	return 0;
}
