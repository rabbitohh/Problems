#include<bits/stdc++.h>
using namespace std;
bool tmp(int a,int b)
{
	return a<b;
}
int a[1000086];
int main()
{
	int n,c;
	cin>>n>>c;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1,tmp);
	long long ans=0;
	//1 1 2 3
	for(int i=n;i>=1;i--) 
	{
		int b=a[i]-c;
		int lo=lower_bound(a+1,a+n+1,b)-a; //返回数组中第一个大于或等于被查数的位置
    	int up=upper_bound(a+1,a+n+1,b)-a; //返回数组中第一个大于被查数的位置
    	ans+=(up-lo);
    	if(c==0) ans--;
	}
	cout<<ans;
	return 0;
}
