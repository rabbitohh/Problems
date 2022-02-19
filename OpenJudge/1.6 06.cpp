#include<bits/stdc++.h>
using namespace std;
int l1[10010];
int main()
{
	int l,m,cnt=0;
	int a1,a2;
	scanf("%d%d",&l,&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d",&a1,&a2);
		for(int j=a1;j<=a2;j++)
		{
			l1[j]=1;
		}
	}
	for(int i=0;i<=l;i++)
		if(l1[i]==0) cnt++;
	printf("%d",cnt);
	return 0;
}
