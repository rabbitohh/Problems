#include<bits/stdc++.h>
using namespace std;
int l=1,r=10000000;
double ans;
int n,k;
double b;
int a[100086];
bool cheak(int x)
{
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
    	cnt+=int(a[i]/x);
	}
	if(cnt>=k) return 1;
	return 0;
}
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
    	cin>>b;
    	a[i]=b*100;
	}
    while(l<=r)
	{
		int mid=(l+r)/2;
		if(cheak(mid)) ans=mid,l=mid+1;
		else r=mid-1;
	}
    printf("%.2f",ans/100);
    return 0;
}
