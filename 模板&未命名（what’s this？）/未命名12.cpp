#include<cstdio>
#include<iostream>
using namespace std;
int a[10086];
int find(int num)
{
	if(a[num]==num) return num;
	return a[num]=find(a[num]);
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
	for(int i=1;i<=m;i++)
	{
		int z,x,y;
		cin>>z>>x>>y;
		if(z==1) a[find(x)]=find(y);
		else if(find(x)==find(y)) cout<<'Y'<<endl;
		else cout<<'N'<<endl;
	}
	return 0;
}
