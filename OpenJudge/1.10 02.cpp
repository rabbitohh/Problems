#include<bits/stdc++.h>
using namespace std;
int a[501];
int main()
{
	int i,n,j=1,b,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b);
		if(b%2!=0)
		{
			a[j]=b;
			j++;
		}
	}
	j--;
	sort(a+1,a+j+1);
	printf("%d",a[1]);
	for(i=2;i<=j;i++)
	{
		printf(",%d",a[i]);
	}
	return 0;
}
