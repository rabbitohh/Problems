#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
int a[10000];
int main()
{
	//freopen("sort.in","r",stdin);
	//freopen("sort.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=q;i++)
	{
		int b;
		cin>>b;
		if(b==1)
		{
			int od,nw;
			cin>>od>>nw;
			a[od]=nw;
		}
		if(b==2)
		{
			int cnt=0;
			int wher;
			cin>>wher;
			int num=a[wher];
			for(int j=1;j<=wher-1;j++)
			{
				if(num>=a[j]) cnt++;
			}
			for(int j=wher+1;j<=n;j++)
			{
				if(num>a[j]) cnt++;
			}
			cout<<cnt+1<<'\n';
		}
	}
	return 0;
}
