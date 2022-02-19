#include<bits/stdc++.h>
using namespace std;
char a[101];
int t[100];
bool su_shu(int a)
{
	if(a==2) return true;
	if(a<=1) return false;
	int m;
	int a2=sqrt(a);
	for(int i=2;i<=a2;i++)
	{
		if(a%i==0) return false;
	}
	return true;
}
int main()
{
	int max=-2147483646,min=2147482647;
	scanf("%s",a);
	int len=strlen(a);
	for(int i=0;i<len;i++)
	{
		t[a[i]-96]++;
	}
	for(int i=1;i<=26;i++)
	{
		if(t[i]>0)
		{
			if(t[i]>max) max=t[i];
			if(t[i]<min) min=t[i];
		}
		
	}
	if(su_shu(max-min)) printf("Lucky Word\n%d",max-min);
	else printf("No Answer\n0");
	return 0;
}
