#include<cstdio>
#include<iostream>
#include<string.h>
using namespace std;
int tu[3000][3000];
int q[100086];
int vis[100086];
int h,t;
int maxx;
int ans=100010101;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		tu[a][b]=1;
		tu[b][a]=1;
	}
	for(int i=1;i<=n;i++)//ö��ɾ���� 
	{
		for(int j=1;j<=n;j++)//��ͨ�� 
		{
			if(j==i) continue;
			if(vis[j]) continue;
			q[t]=j;
			vis[j]=1;
			while(t>=h)
			{
				for(int k=1;k<=n;k++)//ö�������ĸ��� 
				{
					if(k==i) continue;
					if(tu[h][k]&&h!=i&&vis[k]==0) q[++t]=k,vis[k]=1;
				}
				h++;
			}
		}
		int cnt=0;
		for(int j=1;j<=n;j++)
		{
			if(j==i) continue;
			if(vis[j]) cnt++;
		}
		maxx=max(maxx,cnt);
		ans=min(ans,maxx);
		maxx=0;
		memset(vis,0,sizeof(vis));
	} 
	cout<<maxx;
	return 0;
}
