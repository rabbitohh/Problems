#include<cstdio>
#include<iostream>
#define ll long long
using namespace std;
ll a[200001];
ll h[200001];
ll n,s,L;
unsigned long long A_A[200001];
bool check(ll t)
{
	ll cnt=0;
	unsigned long long sum=0;
	for(ll i=1;i<=n;i++)
	{
		A_A[i]=h[i]+t*a[i];
		if(A_A[i]>=L) sum+=A_A[i];
	}
	if(sum>=s) return 1;
	return 0;
}
int main()
{
	cin>>n>>s>>L;
	for(ll i=1;i<=n;i++)
		cin>>h[i];
	for(ll i=1;i<=n;i++)
		cin>>a[i];
	ll l=0;
	ll r=max(s,L);
	ll ans=max(s,L);
	while(l<=r)
	{
		ll mid=(l+r)/2;
		if(check(mid))
		{
			r=mid-1;
			ans=mid;
		}
		else l=mid+1;
	}
	cout<<ans;
	return 0;
}
