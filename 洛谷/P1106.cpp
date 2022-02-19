/*WA£¬86·Ö*/
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int a[10086];
bool flag[10086];
int main()
{
	for(int i=1;i<=300;i++)
	{
		flag[i]=1;
	}
	string s;
	cin>>s;
	int n=s.size();
	for(int i=1;i<=n;i++)
	{
		a[i]=s[i-1]-'0';
	}
	int k;
	cin>>k;
	int bfk=k;
	while(k)
	{
		for(int i=1;i<=n;i++)
		{
			if(flag[i]) 
			{
				if(a[i]) break;
				flag[i]=0;
			}
		}
		bfk=k;
		int fffff=0;
		for(int i=1;i<=n;i++)
		{
			//cout<<i<<endl;
			if(flag[i]==0) continue;
			//cout<<i<<' ';
			int l=-1,r=-1;
			int bfi=i;
			while(--bfi)
			{
				if(flag[bfi]) 
				{
					l=bfi;
					break;
				}
			}
			bfi=i;
			while(++bfi)
			{
				if(flag[bfi]) 
				{
					r=bfi;
					break;
				}
			}
			if(l==-1) l=0;
			if(r==-1) r=i+1;
			if(a[i]>=a[l]&&a[i]>=a[r]) 
			{
				flag[i]=0;
				k--;
				break;
			}
			if(i==n&&bfk==k) fffff=1;
		}
		if(fffff==1) break;
	}
	int cnt=n+1;
	while(k)
	{
		if(flag[--cnt])
		{
			flag[cnt]=0;
			k--;
		}
	}
	int qd0=0;
	for(int i=1;i<=n;i++)
	{
		if(flag[i]) 
		{
			if(a[i]) qd0=1;
			if(qd0==1) cout<<a[i];
		}
		//cout<<flag[i];
	}
	if(qd0==0) cout<<0;
	return 0;
}
