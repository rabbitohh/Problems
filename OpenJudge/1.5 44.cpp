#include<bits/stdc++.h>
using namespace std;
bool qwq(int n1)
{
	double n2=sqrt(n1);
	if(n1<2)
	{
		return false;
	}
	for(int i=2;i<=n2;i++)
	{
		if(n1%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int cnt=0,n,i=2,co;
	scanf("%d",&n);
	while(cnt!=n)
	{
		if(qwq(i))
		{
			cnt++;
		} 
		i++;
	}
	printf("%d",i-1);
	return 0;
}
