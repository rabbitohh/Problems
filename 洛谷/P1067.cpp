#include<cstdio>
#include<iostream>
#include<algorithm>
int c[200];
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n+1;i++)
		cin>>c[i];
	for(int i=1;i<=n+1;i++)
	{
		if(c[i]) 
		{
			if(c[i]>0&&i!=1) cout<<'+';
			else if(c[i]<0) cout<<'-';
			if(c[i]!=1&&c[i]!=-1)
			{
				if(n==i-1) cout<<abs(c[i]);
				else if(n==i) cout<<abs(c[i])<<'x';
				else printf("%dx^%d",abs(c[i]),n-i+1);
			}
			else 
			{
				if(n==i-1) cout<<abs(c[i]);
				else if(n==i) cout<<'x';
				else printf("x^%d",n-i+1);
			}
		}
	}
	return 0;	
} 
