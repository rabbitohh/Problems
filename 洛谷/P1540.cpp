#include<cstdio>
#include<iostream>
using namespace std;
int q[2000];
int h=1,t;
int main()
{
	int m,n;
	cin>>m>>n;
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		int flag=0;
		for(int j=h;j<=t;j++)
			if(q[j]==a) 
			{
				flag=1;
				break;
			}
		if(flag==0) cnt++;
		else continue;
		q[++t]=a;
		if(t-h+1>m) h++;
	}
	cout<<cnt;
	return 0;
}
