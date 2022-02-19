#include<bits/stdc++.h>
using namespace std;
long long a[11];
int main()
{
    long long n,m,i,cnt=0;
	for(i=1;i<=10;i++)
	{
		scanf("%lld",&a[i]);
	}
	scanf("%lld",&n);
	for(i=1;i<=10;i++)
	{
		if(a[i]<=n+30) cnt++;
	}
	printf("%lld",cnt);
	return 0;
}

