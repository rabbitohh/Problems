#include<bits/stdc++.h>
using namespace std;
struct qwq
{
	int ch,ma,en,sum,ID;
};
qwq a[301];
int t[301];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d%d",&a[i].ch,&a[i].ma,&a[i].en);
		a[i].sum=a[i].ch+a[i].ma+a[i].en;
		a[i].ID=i;
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			if(a[j].sum<a[j+1].sum) swap(a[j],a[j+1]);
			if(a[j].sum==a[j+1].sum&&a[j].ch<a[j+1].ch) swap(a[j],a[j+1]);
		}
	}
	for(int i=1;i<=5;i++)
	{
		printf("%d %d\n",a[i].ID,a[i].sum);
	}
	return 0;
}
