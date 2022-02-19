#include<bits/stdc++.h>
using namespace std;
int a[100086];
int main()
{
	long long n,x,cnt=0;
	cin>>n>>x;
	for(int i=1;i<=n;i++)
		cin>>a[i];	
	for(int i=1;i<=n-1;i++)
	{
		if(a[i]+a[i+1]>x)
		{
			int p=(a[i]+a[i+1])-x;
			a[i+1]-=p;
			cnt+=p;
		}
	}
	cout<<cnt;
    return 0;
}
