#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
int main()
{
	int n;
	scanf("%d",&n);
	n=n*2-1;
	int y=n/2+1;
	int x=1;
	int X,Y;
	for(int i=1;i<=n*n;i++)
	{
  		a[x][y]=i;
		X=x;
		Y=y;
		X--;
		Y++;
		for(int i=1;i<=n;i++)
		{
			if(a[X][Y]!=0)
			{
				X=x;
				Y=y;
				X++;
			}
			if(X==0) X=n;
			if(Y>n) Y=1;
		}
		x=X;
		y=Y;
//		cout<<X<<' '<<Y<<" \n";
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
//			if(a[i][j]<10) cout<<' ';
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
