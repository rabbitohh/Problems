#include<cstdio>
#include<iostream>
using namespace std;
unsigned long long h[210000];
unsigned long long a[210000];
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	unsigned long long n,s,l;
	cin>>n>>s>>l;
	for(int i=1;i<=n;i++)
	{
		cin>>h[i]; 
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	unsigned long long cnt=0;
	unsigned long long tim=0;
	for(int i=1;i<=n;i++)
		if(h[i]>l) cnt+=h[i],h[i]=0;
	while(cnt<s)
	{
		tim++;
		for(int i=1;i<=n;i++)
		{
			if(h[i]) h[i]+=a[i];
			if(!h[i]) cnt+=a[i];
			if(h[i]>l) cnt+=h[i],h[i]=0;
		}
	}
	cout<<tim;
	return 0;
}
