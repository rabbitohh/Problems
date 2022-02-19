#include<bits/stdc++.h>
using namespace std;
int a[10][10];
int main()
{
	int m,n;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
	for(int i=1;i<=5;i++)
	{
		swap(a[n][i],a[m][i]);
	}
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
