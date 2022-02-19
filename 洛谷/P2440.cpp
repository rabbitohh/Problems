#include<bits/stdc++.h>
using namespace std;
int l=1,r=1,ans;
int n,k;
int a[100086];
bool cheak(int x)
{
    int sum=0;
    for(int i=1;i<=n;i++)
        sum+=(a[i]/x);
    if(sum>=k) return true;
	return false;
}
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    	cin>>a[i];
    int maxx=-1;
    for(int i=1;i<=n;i++)
    	maxx=max(maxx,a[i]);
    r=maxx;
    while(l<=r)
	{
		int mid=(l+r)/2;
		if(cheak(mid)==1) ans=mid,l=mid+1;
		else r=mid-1;
	}
    printf("%d",ans);
    return 0;
}
