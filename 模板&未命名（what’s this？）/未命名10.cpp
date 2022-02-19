#include<cstdio>
#include<iostream>
using namespace std;
long long n,m;
long long a[200000];
bool check(long long X)
{
	long long cnt=0;
	long long sum=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>X) return 0;
		//sum+=a[i];
		if(sum+a[i]<=X) sum+=a[i];
		else 
		{
			cnt++;
			sum=a[i];
		}
		//if(i==n-1&&sum==0&&a[n]!=0) cnt++;
	}
	//cout<<cnt;
	if(sum!=0) cnt++;
	if(cnt<=m) return 1;
	return 0;
}
int main()
{
	//freopen("1182_3.in","r",stdin);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	long long l=1,r=1000000000,mid;
	long long ans;
	while(l<r)
	{
		mid=(l+r)/2;
		//cout<<mid<<' '<<check(mid)<<endl;
		if(check(mid)) r=mid,ans=mid;
		else l=mid+1;
	}
	cout<<ans;
	//cout<<check(7);
	return 0;	
} 
