#include<bits/stdc++.h>
using namespace std;
int a[1000000];
bool tmp(int a,int b)
{
	return a>b;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		scanf("%d,",&a[i]);
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
		cout<<a[i]<<' ';
	return 0;
}
