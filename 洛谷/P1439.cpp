#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int a[200000];
int b[200000];
int has[200000];
int mi[200000];
int main()
{
	int n;
	cin>>n;
	int maxl=1;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		cin>>b[i];
	for(int i=1;i<=n;i++)
	{
		has[a[i]]=i;
	}
	for(int i=1;i<=n;i++)
	{
		b[i]=has[b[i]];
	}
	memset(mi,0x3f,sizeof mi);
	mi[1]=b[1]; 
	for(int i=2;i<=n;i++)
	{
		mi[(upper_bound(mi+1,mi+maxl+1,b[i])-mi)]=b[i];
		if(mi[maxl+1]!=0x3f3f3f3f) maxl++;
	}
	cout<<maxl;
	return 0;
}
