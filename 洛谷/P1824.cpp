#include<bits/stdc++.h>
using namespace std;
bool tmp(int a,int b)
{
	return a<b;
}
int a[1000086];
int n,c;
bool ch(int i)//相隔i是否可行 
{
	int cnt=1;//已经放了几只奶牛 
	int l=a[1];
	for(int j=1;j<=n;j++)
	{
		if(a[j]-l>=i) l=a[j],cnt++; 
	}
	if(cnt>=c) return 1;
	return 0;
}
int main()
{
	cin>>n>>c;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1,tmp);
	int ans=0;
	int l=1,r=a[n];
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(ch(mid)) ans=mid,l=mid+1;
		else r=mid-1;
	}
	cout<<ans;
	//cout<<ch(2);
	return 0;
}
