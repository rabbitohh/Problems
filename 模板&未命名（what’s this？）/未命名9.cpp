#include<cstdio>
#include<iostream>
using namespace std;
int a[50086];
bool del[50086];
int L,n,m;//起点终点距离 岩石数量 移走几个
bool check(int X)
{
	int cnt=0;
	for(int i=0;i<=n;i++)//起点 
	{
		if(del[i]) continue;
		int j=-1;
		for(int k=i+1;k<=n+1;k++)
		{
			if(!del[k])
			{
				j=k;//终点 
				break; 
			}
		}
		//cout<<j<<' ';
		if(a[j]-a[i]<X)
		{
			//cout<<'a';
			if(j==n+1)
			{
				del[i]=1;
				i=1;
				cnt++;
			}
			else
			{
				del[j]=1;
				i=1;
				cnt++;	
			}
			//cout<<i<<' ';
		} 
	}
	if(cnt>m) return 0;
	return 1;
} 
int main()
{
	cin>>L>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	a[n+1]=L;
	int l=1,r=L,mid;
	int ans;
	while(l<r)
	{
		mid=(l+r)/2;
		cout<<mid<<' ';
		cout<<check(mid)<<endl; 
		if(check(mid)) l=mid+1,ans=mid;
		else r=mid;
	}
	cout<<ans<<' ';
	cout<<check(19);
	return 0;	
} 
