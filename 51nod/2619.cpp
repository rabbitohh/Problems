#include<bits/stdc++.h>
#define ull unsigned long long
#define N 500010
using namespace std;
ull p[N],h[N],flag;
ull b=233;
char s[N];
char ans[N];
int n;
ull shash(int l,int r)
{
	return h[r]-h[l-1]*p[r-l+1];
}
bool findpos(int pos)
{
	ull l,r;
	int mid=1+n>>1;
	if(pos==mid)
	{
		l=shash(1,mid-1);
		r=shash(mid+1,n);
	}
	else if(pos<mid)
	{
		l=shash(1,pos-1)*p[mid-pos]+shash(pos+1,mid);
		r=shash(mid+1,n);
	}
	else
	{
		l=shash(1,mid-1);
		r=shash(mid,pos-1)*p[n-pos]+shash(pos+1,n);
	}
	if(l==r&&flag!=l) 
	{
		flag=l;
		if(pos<=mid)
		{
			for(int i=mid+1;i<=n;i++)
				ans[i-mid]=s[i];
		}
		else 
		{
			for(int i=1;i<mid;i++)
				ans[i]=s[i];
		}
		return 1;
	}
	return 0;
}
int main()
{
	cin>>n>>s+1;
	p[0]=1;
	for(int i=1;i<=n;i++)
		p[i]=p[i-1]*b,h[i]=h[i-1]*b+s[i];
	if(n%2==0) 
	{
		cout<<"NOT POSSIBLE";
		return 0;
	}
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		cnt+=findpos(i);
		if(cnt>1)
		{
			cout<<"NOT UNIQUE";
			return 0;
		}
	}
	if(cnt==0) cout<<"NOT POSSIBLE";
	else cout<<ans+1; 
	return 0;
}
