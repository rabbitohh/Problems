/*WA£¬40·Ö*/
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int a[110000];
int b[110000];
int midd(int num)
{
	for(int i=1;i<=num;i++)
	{
		b[i]=a[i];
	}
	sort(b+1,b+num+1);
	return b[(num/2)+1];
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if((2*i)-1<=n) cout<<midd((2*i)-1)<<endl;
	}
	return 0;
}
