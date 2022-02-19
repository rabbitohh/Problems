#include<bits/stdc++.h>
using namespace std;
int a[10010];
int main()
{
	int i,top=-2147483640,low=2147483647,n;
	top=-100;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]>top)
		{
			top=a[i];
		}
		if(a[i]<low)
		{
			low=a[i];
		}
	}
	top=top-low;
	printf("%d",top);
	return 0;
}
