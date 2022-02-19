#include<bits/stdc++.h>
using namespace std;
int a[1000086],val[1000086],sub[1000086];
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int head=1;
	int tail=1;
	for(int i=1;i<=n;i++)
	{
		if(head<=tail&&sub[head]<=i-k) head++;
		while(head<=tail&&val[tail]>a[i]) tail--;
		sub[++tail]=i;
		val[tail]=a[i];
		if(i>=k) cout<<val[head]<<' ';
	}
	cout<<endl;
	head=tail=1;
	for(int i=1;i<=n;i++)
	{
		if(head<=tail&&sub[head]<=i-k) head++;
		while(head<=tail&&val[tail]<a[i]) tail--;
		sub[++tail]=i;
		val[tail]=a[i];
		if(i>=k) cout<<val[head]<<' ';
	}
	return 0;	
} 
