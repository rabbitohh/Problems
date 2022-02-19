#include<bits/stdc++.h>
using namespace std;
int c[100]={1,1};
int main()
{
	int k,i,a=1,b=1;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		c[i+2]=c[i]+c[i+1];
	}
	printf("%d",c[i+1]);
	return 0;
}
