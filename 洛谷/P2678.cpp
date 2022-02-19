#include<cstdio>
#include<iostream>
using namespace std;
long long d[100000];
long long l1,n,m;
bool check(int len)
{
	int cnt=0;
	int j=n;
	while(l1-d[j]<len)
	{
		cnt++;
		j--;
	}
	for(int i=1;i<=j;i++)
	{
		int st=i-1;
		while(d[i]-d[st]<len&&i<=j)
		{
			cnt++;
			i++;
		}
	}
	if(cnt>m) return 0;
	return 1;
}
int main()
{
	cin>>l1>>n>>m; 
	if(!n)
	{
		cout<<l1;
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>d[i];
	}
	int l=1,r=l1;
	long long ans=1;
	while(l<=r)
	{
		long long mid=(l+r)/2;
		if(check(mid))
		{
			l=mid+1;
			ans=max(ans,mid);
		}
		else r=mid-1;
	}
	cout<<ans;
	return 0;
}
