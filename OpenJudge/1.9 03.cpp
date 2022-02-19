#include<bits/stdc++.h>
using namespace std;
int a[10];
int b[10];
int c[10];
int main()
{
	int i,top,j,jj;
	top=-100;
	for(i=1;i<=7;i++)
	{
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
	}
	for(i=1;i<=7;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=1;i<=7;i++)
	{
		if(c[i]>top)
		{
			 top=c[i];
			 j=i;
			 jj=c[i];
		}
	}
	if(jj>8) printf("%d",j);
	else printf("0");
	return 0;
}
