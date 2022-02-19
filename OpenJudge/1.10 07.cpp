#include<bits/stdc++.h>
using namespace std;
struct qwq
{
	char nn[20];
	double tall;
	
};
qwq a[50];
double na[40],nv[40];
int main()
{
	int n,i,j,k=1,k2=1;
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s %lf",a[i].nn,&a[i].tall);
	}
	for(i=1;i<=n;i++)
	{
		if(strcmp(a[i].nn,"female")==0)
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
	for(i=1;i<=k2;i++)
	{
		printf("%.2f ",na[i]);
	}
	for(i=1;i<=k;i++)
	{
		printf("%.2f ",nv[i]);
	}
	return 0;
}
