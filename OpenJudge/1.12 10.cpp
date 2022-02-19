#include<bits/stdc++.h>
using namespace std;
int su_shu(int a)
{
	if(a==2) return 1;
	if(a==1||a==0) return 0;
	int m;
	int a2=sqrt(a);
	for(int i=2;i<=a2;i++)
	{
		if(a%i==0) return 0;
	}
	return 1;
}
int main()
{
	int a;
	int flag=0;
	scanf("%d",&a);
	for(int i=3;i<=a-2;i++)
	{
		if(su_shu(i)==1&&su_shu(i+2)==1)
		{
			printf("%d %d\n",i,i+2);
			flag=1;
		}
	}
	if(flag==0) printf("empty");
	return 0;
}
