#include<algorithm>
#include<cstdio>
#include<iostream>
using namespace std;
bool b[10086];
int main()
{
	int n,m;
	cin>>n>>m;
	int num=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			do if(++num>n) num=1;
	 		while(b[num]);
		}
		cout<<num<<' ';
		b[num]=1;
	}
	return 0;	
} 
