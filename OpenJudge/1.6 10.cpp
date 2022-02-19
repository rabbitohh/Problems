#include<bits/stdc++.h>
using namespace std;
	char a[100001];
	char b[100001];
	int a1[100001];
	int b1[100001];
	int c1[100001];
	int i=0;
int main()
{
	cin>>a;
	cin>>b;
	int len1=strlen(a);
	int len2=strlen(b);
	for(int i=0;i<len1;i++)
		a1[i]=a[len1-i-1]-'0';
	for(int i=0;i<len2;i++)
		b1[i]=b[len2-i-1]-'0';
	int x=0;
	while(i<len1||i<len2)
	{
		c1[i]=a1[i]+b1[i]+x;
		x=c1[i]/10;
		c1[i]=c1[i]%10;
		i++;
	}
	c1[i]=x;
	while(true)
	{
		if(c1[i]==0&&i>=1)
			i--;
		else break;
	}
	for(int j=i;j>=0;j--)
	{
		cout<<c1[j];
	}
	return 0;
}
