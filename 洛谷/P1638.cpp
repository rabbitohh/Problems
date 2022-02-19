#include<bits/stdc++.h>
using namespace std;
int a[1111111];
int cnt[1111111];
int nnn[10086];
bool pd(int nnn[],int b)
{
	for(int i=1;i<=b;i++)
		if(!nnn[i]) return false;
	return true;
}
int main()
{
	int n,s;
	cin>>n>>s;
	int max=0;
	int ans=2147483647;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		max+=a[i];
	}
	int ansleft,ansright;
	int flag=0;
	int l=1,r=1;
	int cnt=0;
	while(r<=n)
	{
		if(++nnn[a[r++]]==1) cnt++;
		while(cnt==s&&l<r) 
		{
			int an=ans;
			ans=min(ans,r-l);
			if(--nnn[a[l++]]==0) cnt--;
			if(an!=ans) ansleft=l-1,ansright=r-1;
		}
	}
	cout<<ansleft<<' '<<ansright;
	return 0;
}
