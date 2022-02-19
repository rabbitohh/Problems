#include<bits/stdc++.h>
using namespace std;
int aa[10000000];
int main()
{
	int a;
	cin>>a;
	int b=2;
	while(b<a)
		b*=2;
	int j=0;
	for(int i=b;i>=2;i/=2)
	{
		if(i<=a) 
		{
			aa[++j]=i;
			a-=i;
		}
	}
	if(a!=0) cout<<-1;
	else
		for(int i=1;i<=j;i++)
			cout<<aa[i]<<' ';
	return 0;
} 
