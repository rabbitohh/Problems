#include<bits/stdc++.h>
using namespace std;
long long a[10100];
int main()
{
    long long n,m,i,b=-1;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	scanf("%lld",&m);
	for(i=1;i<=n;i++)
	{
		if(a[i]==m)
		{
			b=i;
			break;
		}
	}
	printf("%d",b);
	return 0;
}
