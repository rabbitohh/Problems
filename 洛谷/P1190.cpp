#include<cstdio>
#include<iostream>
using namespace std;
int w[100001];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>w[i];
	int kwk=m;
	int ti=0;
	for(int cnt=0;cnt<n;)
	{
		ti++;
		for(int j=1;j<=m;j++)
		{
			w[j]--;
			if(w[j]==0) w[j]=w[++kwk],cnt++;
		}
	}
	cout<<ti;
	return 0;
}
