#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring> 
using namespace std;
int a[2000];
int mi[2000];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	memset(mi,0x3f,sizeof mi);
	mi[1]=a[1];
	int maxl=1;
	for(int i=2;i<=n;i++)
	{
		mi[(upper_bound(mi+1,mi+maxl+1,a[i])-mi)]=a[i];
		if(mi[maxl+1]!=0x3f3f3f3f) maxl++;
	}
	for(int i=n;i>=1;i--)
	{
		if(mi[i]!=0x3f3f3f3f)
		{
			cout<<i;
			break;
		}
	}
	return 0;
}
