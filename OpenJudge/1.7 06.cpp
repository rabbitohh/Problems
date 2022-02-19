#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[30];
	int i;
	scanf("%s",a);
	for(i=48;i<=57;i++)
	{
		if(a[0]==i)
		{
			printf("no");
			return 0;
		}
	}
	int n=strlen(a)-1;
	for(i=0;i<=n;i++)
	{
		for(int j=0;j<=47;j++)
		{
			if(a[i]==j)
			{
				printf("no");
				return 0;
			}
		}
		for(int j=58;j<=64;j++)
		{
			if(a[i]==j)
			{
				printf("no");
				return 0;
			}
		}
		for(int j=123;j<=127;j++)
		{
			if(a[i]==j)
			{
				printf("no");
				return 0;
			}
		}
	}
	printf("yes");
	return 0;
}
