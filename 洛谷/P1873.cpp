#include<cstdio>
#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
ll n,m;
ll a[1100000];
bool check(ll h)
{
	ll anss=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]-h>=0) anss+=(a[i]-h);
		//cout<<a[i]<<' '<<h<<endl;
	}
	//cout<<anss<<endl;
	if(anss>=m) return 1;
	return 0;
}
int main()
{
	cin>>n>>m;
	ll maxx=0;
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
		//cout<<a[i];
		maxx=max(maxx,a[i]);
	}
	ll l=1,r=2000000001;
	ll ans=maxx;
	while(l<=r)
	{
		ll mid=(l+r)/2;
		if(check(mid))
		{
			l=mid+1;
			ans=mid;
		}
		else r=mid-1;
	}
	cout<<ans;
	return 0;
 } 
