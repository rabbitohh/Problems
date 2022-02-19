#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int t[1000];
int main()
{
	int n;
	double w;
	cin>>n>>w;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		t[a[i]]++;
		int j=601;
		int sum=0;
		while(sum<max(1,int(i*w/100)))
			sum+=t[--j];
		cout<<j<<' ';
	}
	
	return 0;
}
