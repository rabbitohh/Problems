#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
long long a[1000086];
long long mi[1000086];
int main()
{
	long long n;
	cin>>n;
	long long ans=-44444444444;
	memset(mi,0x3f,sizeof mi);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		mi[i]=min(mi[i-1],a[i]);
		ans=max(ans,a[i]-mi[i-1]);
	}
	cout<<ans;
	return 0;
}
