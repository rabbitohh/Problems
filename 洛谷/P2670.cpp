#include<cstdio>
#include<iostream>
using namespace std;
int gox[10]={0,1,-1,1,-1,0,0,1,-1};
int goy[10]={0,-1,1,1,-1,1,-1,0,0};
int ans[200][200];
int n,m;
void boom(int a,int b)
{
	for(int i=1;i<=8;i++)
	{
		if(ans[a+gox[i]][b+goy[i]]>=0&&a+gox[i]<=n&&a+gox[i]>=1&&b+goy[i]<=m&&b+goy[i]>=1)
		{
			ans[a+gox[i]][b+goy[i]]++;
		}
	}
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		string s;
		cin>>s;
		for(int j=0;j<=m-1;j++)
		{
			if(s[j]=='*')
			{
				ans[i][j+1]=-1;
				boom(i,j+1);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(ans[i][j]==-1) cout<<'*';
			else cout<<ans[i][j];
		}
		cout<<endl;
	}
	return 0;
} 
