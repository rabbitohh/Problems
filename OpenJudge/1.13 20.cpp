#include<cstdio>
#include<iostream>
using namespace std;
int a[30];
bool b[200][200];
int t[200];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a1,k;
		cin>>a1>>k;
		for(int j=1;j<=k;j++)
		{
			int a2;
			cin>>a2;
			b[a1][a2]=1;
			t[a2]++;
		}
	}
	int maxnum;
	for(int i=1;i<=100;i++)
	{
		if(t[maxnum]<t[i])
			maxnum=i;	 	
	}
	cout<<maxnum<<endl;
	for(int i=1;i<=100;i++)
	{
		if(b[i][maxnum]) cout<<i<<' ';
	}
	return 0;
}
