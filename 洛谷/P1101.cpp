#include<bits/stdc++.h>
using namespace std;
char a[200][200];
bool c[200][200];
int tx[10086],ty[10086];
int gox[10]={0,1,-1,0,0,1,-1,1,-1};
int goy[10]={0,0,0,1,-1,1,-1,-1,1};
char b[10]={'\0','y','i','z','h','o','n','g'};
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		string s;
		cin>>s;
		for(int j=1;j<=n;j++)
			a[i][j]=s[j-1];
	} 
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(a[i][j]=='y')
			{
				for(int k1=1;k1<=8;k1++)
				{
					int x=gox[k1],y=goy[k1];
					int flag=0;
					for(int k2=1;k2<=6;k2++) 
					{
						int nx=i+(k2*x),ny=j+(k2*y);
						if(nx<1||nx>n||ny<1||ny>n)
						{
							flag=1;
							continue;
						}
						if(a[nx][ny]!=b[k2+1]) flag=1;
					}
					//cout<<flag;
					if(flag==0) for(int k2=0;k2<=6;k2++) c[i+k2*x][j+k2*y]=1;
				}
			}
				
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(c[i][j]==0) a[i][j]='*';
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cout<<a[i][j];
		cout<<endl; 
	}
	 
		
	return 0;	
} 
