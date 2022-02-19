#include<cstdio>
#include<iostream>
using namespace std;
int ne[10086];
int th[10086];
int cnt;
int h[10086];
void ahead(int a,int b)
{
	th[++cnt]=b;
	ne[cnt]=h[a];
	h[a]=cnt;
	return;
}
int main()
{
	int n,m;
	cin>>n>>m;
	memset(h,-1,sizeof h);
	for(int i=1;i<=n;i++)
	{
		int a,b;
		cin>>a>>b;
		ahead(a,b);
		ahead(b,a);
	}
	int i=head;
	while(i!=-1)
	{
		cout<<th[i]<<' ';
		i=ne[i];
	}
	return 0;
}
