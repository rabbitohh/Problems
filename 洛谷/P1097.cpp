#include<bits/stdc++.h>
using namespace std;
int a[200001];
int main()
{
	int n;
	cin>>n;
	int x;
	int v=1;
	for(int i=1;i<=200000;i++) a[i]=-1;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		a[v]=x;
		v++;
	}
	sort(a+1,a+n+1);
	int b=1;
	int i=1;
	while(i<=n)
	{
		i++;
		while(a[i]==a[i-1])
		{
			i++;
			b++;
		}
		cout<<a[i-1]<<' '<<b<<"\n";
		b=1;
	}
	return 0;
}
