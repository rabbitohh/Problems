#include<bits/stdc++.h>
using namespace std;
struct qwq
{
	int ID;
	double sum;
};
qwq a[101];
int main()
{
	int i,n,j,k;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i].ID);
		scanf("%lf",&a[i].sum);
	}
	for(i=1;i<=n;i++)
		for(j=1;j<=n-i;j++)
			if(a[j].sum<a[j+1].sum)
			{
				swap(a[j].sum,a[j+1].sum);
				swap(a[j].ID,a[j+1].ID);
			}
	printf("%d %g",a[k].ID,a[k].sum);
	return 0;
}
