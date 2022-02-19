/*WA£¬0·Ö*/
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int a[110000],c[110000];
double sum[1100000];
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	int bi=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			sum[++bi]=double(a[i]*c[i]*1.0+a[j]*c[j]*1.0)/double((a[i]+a[j])*1.0);
		}
	}
	sort(sum+1,sum+bi+1);
	printf("%.3lf",sum[bi-k+1]);
	return 0;
}
