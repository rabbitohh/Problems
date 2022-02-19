#include<bits/stdc++.h>
using namespace std;
int l1[5010];
int main()
{
	int n,m,a=2;
	int a1,i;
	scanf("%d%d",&n,&m);
 	for(int i=2;i<=m;i++)
 	{
		for(int j=2;j<=n;j++)
		{
			if(j%a==0)
			{
				if(l1[j]==0) l1[j]=1;
				else l1[j]=0;
			}
		}
		a+=1;
 	}
 	cout<<1;
	for(i=2;i<=n;i++)
	{
		if(l1[i]==0)
			printf(",%d",i);
	}
	return 0;
}
