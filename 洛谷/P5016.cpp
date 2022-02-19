#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
long long c[100086];
int main()
{
	long long n;
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>c[i];
	}
	long long m,p1,s1,s2;
	cin>>m>>p1>>s1>>s2;
	c[p1]+=s1;
	long long sum1=0,sum2=0;
	for(long long i=1;i<m;i++)
	{
		sum1+=c[i]*abs(i-m);
	}
	for(long long i=m+1;i<=n;i++)
	{
		sum2+=c[i]*abs(i-m);
	}
	long long a,b,ans,ansnum=0x3f3f3f3f3f3f3f3f;
	if(sum1<sum2) a=1,b=m;
	else if(sum2<sum1) a=m,b=n;
	else a=0,b=0,ans=m;
	for(long long i=1;i<=n;i++)
	{
		long long busum1=sum1;
		long long busum2=sum2;
		if(i<m) sum1+=s2*abs(i-m);
		if(i>m) sum2+=s2*abs(i-m);
		if(ansnum>abs(sum1-sum2))
		{
			ans=i;
			ansnum=abs(sum1-sum2);
		}
		sum1=busum1;
		sum2=busum2;
	}
	cout<<ans;
	return 0;
}
