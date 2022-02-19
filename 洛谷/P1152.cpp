#include<bits/stdc++.h>
using namespace std;
int a[3010],b[3010];
int main()
{
	int i,n,j,flag=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n==1)
	{
		printf("Jolly");
		return 0;
	}
	for(i=1;i<n;i++)
		b[i]=abs(a[i]-a[i+1]);
	for(i=1;i<n-1;i++)
		for(j=i;j<=n-1;j++)
			if(b[i]>b[j]) swap(b[i],b[j]);
	for(i=1;i<n;i++)
	{
		if(b[i]!=i)
		{
			flag=0;
			break;
		}
	}
	if(flag)
		printf("Jolly");
	else
		printf("Not jolly");
	return 0;
}
