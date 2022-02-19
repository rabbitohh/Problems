#include<bits/stdc++.h>
using namespace std;
struct qwq
{
	char name[20];
	int annao;
};
qwq a[21];
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s%d",a[i].name,&a[i].annao);
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			if(a[j].annao<a[j+1].annao)
			{
				swap(a[j],a[j+1]);
			}
			if(a[j].annao==a[j+1].annao&&strcmp(a[j].name,a[j+1].name)>0)
			swap(a[j],a[j+1]);
		}
	}
	for(i=1;i<=n;i++)
	{
		printf("%s %d\n",a[i].name,a[i].annao);
	}
	return 0;
}
