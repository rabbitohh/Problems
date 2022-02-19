#include<cstdio>
#include<iostream>
using namespace std;
//using namespace ios;
int a[100086];
int b[100086];
int main()
{
	freopen("sequence.in","r",stdin);
	freopen("sequence.out","w",stdout);
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		cin>>b[i];
	for(int i=1;i<=n;i++)
	{
		if(a[i]>b[i])
		{
			cout<<1;
			return 0;
		}
		if(a[i]<b[i])
		{
			cout<<3;
			return 0;
		}
	}
	cout<<2;
	return 0;
}
