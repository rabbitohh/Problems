#include<bits/stdc++.h>
using namespace std;
int a[1100];
int main()
{
	int i,n,j,t,cnt=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t);
		if(a[t]==0)
		{
			a[t]++;
			cnt++;
		}
		
	}
	printf("%d\n",cnt);
	for(i=1;i<1000;i++)
	{
		if(a[i]>=1)
		{
			printf("%d ",i);
		} 
	}
	return 0;
}
