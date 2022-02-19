#include<cstdio>
#include<iostream>
using namespace std;
long long fastm(long long base,long long power,long long mod)
{
	long long result=1;
	while(power>0)
	{
		if(power&1)
			result=(result*base)%mod;
		power>>=1;
		base=(base*base)%mod;
	}
	return result;
} 
int main() 
{
	long long a,b,m;
	cin>>a>>b>>m;
	if(m==1) cout<<a<<'^'<<b<<' '<<"mod"<<' '<<m<<'='<<0;
	else cout<<a<<'^'<<b<<' '<<"mod"<<' '<<m<<'='<<fastm(a,b,m);
	return 0;
}

