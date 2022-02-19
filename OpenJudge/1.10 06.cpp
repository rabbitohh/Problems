#include<bits/stdc++.h>
using namespace std;
struct qwq
{
	int tall;

};
qwq a[200];
int na[200],nv[200];
int main()
{
	int n,i,j,k=1,k2=1;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i].tall);
	}
	for(i=1;i<=10;i++)
	{
		if(a[i].tall%2==1)
		{
			nv[k]=a[i].tall;
			k++;
		}
		else
		{
			na[k2]=a[i].tall;
			k2++;
		}
	}
	k--;
	k2--;
	for(i=1;i<=k2;i++)
	{
		for(j=1;j<=k2-i;j++)
		{
			if(na[j]>na[j+1]) swap(na[j],na[j+1]);
		}
	}
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=k-i;j++)
		{
			if(nv[j]<nv[j+1]) swap(nv[j],nv[j+1]);
		}
	}
	for(i=1;i<=k;i++)
	{
		printf("%d ",nv[i]);
	}
	for(i=1;i<=k2;i++)
	{
		printf("%d ",na[i]);
	}
	return 0;
}
