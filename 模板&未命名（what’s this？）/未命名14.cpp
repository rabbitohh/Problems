#include<bits/stdc++.h>
#define inf 0x3f3f3f3f
#define ll long long
using namespace std;
const int N=1e5+5;
int n,A[N],l;
ll pres[N],B[N];
int check(ll x)
{
	ll mm=inf,anss=-inf;
	for(int i=1;i<=n;i++)
	{
		B[i]=A[i]-x;
	}
	pres[1]=B[1];
	for(int i=2;i<=n;i++)
	{
		pres[i]=pres[i-1]+B[i];
		if(i-l>=0)
		{
			mm=min(mm,pres[i-l]);
			anss=max(anss,pres[i]-mm);
		}
	}
	return anss;
}
int main()
{
	scanf("%d%d",&n,&l);
	int maxx=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&A[i]);
		maxx=max(maxx,A[i]);
		A[i]*=1000;
	}
	ll le=0,ri=2*1e8,ans;
	while(le<=ri)
	{
		ll mid=(le+ri)/2;
		if(check(mid)==0)
		{
			ans=mid;	
			break;
		}	
		else if(check(mid)<0)
			ri=mid-1;
		else le=mid+1;
	} 
	printf("%lld",ans);
	return 0;
 } 
