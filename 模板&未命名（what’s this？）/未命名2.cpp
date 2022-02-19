#include<cstdio>
#include<iostream>
using namespace std;
int a[100086];
int ans[100086],cnt;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=2;i<=n-1;i++)
	{
		if(a[i]>a[i-1]&&a[i]>a[i+1])
			ans[++cnt]=i;
	}
	if(cnt==0) cout<<-1;
	else if(cnt%2==0) cout<<ans[cnt/2];
	else cout<<ans[cnt/2+1];
	return 0;
}
