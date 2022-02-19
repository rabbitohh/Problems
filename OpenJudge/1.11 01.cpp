#include<bits/stdc++.h>
using namespace std;
int a[100001];
int m[10001];
int er_fen(int c,int a[],int m)
{
	int left=1,right,middle;
  	left=1;
  	right=c;
  	middle=(left+right)/2;
  	if(m>=a[c]) return a[c];
  	if(m<=a[1]) return a[1];
	while(left+1<right)
	{
		middle=(left+right)/2;
		if(a[middle]<m)
			left=middle;
		else right=middle;
	}
	//cout<<m-a[left]<<' '<<m-a[right]<<' ';
 	if(m-a[left]<a[right]-m)
	{
		return a[left];
	}
	else if(m-a[left]==a[right]-m)
	{
		return a[left];
	}
	return a[right];
}
int main()
{
	int c;
	scanf("%d",&c);
	for(int i=1;i<=c;i++)
	{
		scanf("%d",&a[i]);
	}
	int b;
	scanf("%d",&b);
	for(int i=1;i<=b;i++)
	{
		scanf("%d",&m[i]);
	}
	for(int i=1;i<=b;i++)
	{
		int j=er_fen(c,a,m[i]);
		printf("%d\n",j);
	}
	return 0;
}
