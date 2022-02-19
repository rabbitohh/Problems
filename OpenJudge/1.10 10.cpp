#include<bits/stdc++.h>
using namespace std;
char a[110][51];
int main()
{
	int i=1,j,n=0;
	//freopen("1.txt","r",stdin);
	//freopen("2.txt","w",stdout);
	while(scanf("%s",a[i++])!=EOF)
		n++;
	
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(strcmp(a[i],a[j])>0) swap(a[i],a[j]);
		}
	}
//	for(i=1;i<=n;i++)
//	{
//		printf("%s\n",a[i]);
//	}
	for(i=1;i<=n;i++)
	{
		if(strcmp(a[i],a[i+1])!=0)
			printf("%s\n",a[i]);
	}
	return 0;
}
