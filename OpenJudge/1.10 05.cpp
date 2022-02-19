#include<bits/stdc++.h>
using namespace std;
int a[5001],b[5001],a2[5001],b2[5001];
int main()
{
	int n,m,i,j,x,k=1,cnt=0;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=n-1;j>=1;j--)
		{
			if(b[j]<b[j+1])
			{
				swap(b[j],b[j+1]);
				swap(a[j],a[j+1]);
			}
			 
		}
	}
	x=b[int(m*1.5)];
	for(i=1;i<=n;i++)
	{
		if(b[i]>=x)
		{
			cnt++;
			b2[k]=b[i];
			a2[k]=a[i];
			k++;
		}
	}
	printf("%d %d\n",x,cnt);
	for(i=1;i<=n;i++)
	{
		for(j=n-1;j>=1;j--)
		{
			if(a2[j]>a2[j+1]&&b2[j]==b2[j+1]) swap(a2[j],a2[j+1]);
		}
	}
	for(i=1;i<=cnt;i++)
	{
		printf("%d %d\n",a2[i],b2[i]);
	}
	return 0;
}
