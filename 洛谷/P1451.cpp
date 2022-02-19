#include<bits/stdc++.h>
using namespace std;
int a[200][200];
int ans=0;
int n,m;
int gox[10]={1,-1,0,0};
int goy[10]={0,0,1,-1};
void bfs(int x,int y)
{
	ans++;
	int qx[20000],qy[20000];
	int h=0,t=0;
	qx[t]=x,qy[t]=y;
	while(h<=t)
	{
		//cout<<h<<' '<<t<<endl;
		for(int i=0;i<=3;i++)
		{
			if(a[qx[h]+gox[i]][qy[h]+goy[i]]!=0&&qx[h]+gox[i]>=1&&qx[h]+gox[i]<=n&&qy[h]+goy[i]>=1&&qy[h]+goy[i]<=m)
			{
				a[qx[h]+gox[i]][qy[h]+goy[i]]=0;
				qx[++t]=qx[h]+gox[i];
				qy[t]=qy[h]+goy[i];
			}
		}
		h++;
	}
	
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		string s;
		cin>>s;
		for(int j=1;j<=m;j++)
			a[i][j]=s[j-1]-'0';
	}	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(a[i][j]!=0) bfs(i,j);
	cout<<ans;
	return 0;
}
