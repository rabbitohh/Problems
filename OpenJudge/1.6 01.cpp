#include<bits/stdc++.h>
using namespace std;
long long a[101];
int main()
{
    long long n,m,i,cnt=0;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	scanf("%lld",&m);
	for(i=1;i<=n;i++)
	{
		if(a[i]==m) cnt++;
	}
	printf("%lld",cnt);
	return 0;
}
