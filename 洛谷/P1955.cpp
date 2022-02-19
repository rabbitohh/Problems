/*WA£¬50·Ö*/
#include<cstdio>
#include<iostream>
using namespace std;
long long fa[10000086];
long long find(long long num)
{
	if(fa[num]==num) return num;
	return fa[num]=find(fa[num]);
}
long long x[10000086],y[10000086],e[10000086];
int main()
{
	long long n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long m;
		cin>>m;
		for(int j=1;j<=m;j++)
		{
			cin>>x[j]>>y[j]>>e[j];
		}
		for(int j=1;j<=m;j++)
		{
			if(e[j]==1)	fa[find(x[j])]=find(y[j]);
		} 
		for(int j=1;j<=m;j++)
		{
			if(e[j]==0)
			{
				if(find(x[j])==find(y[j]))
				{
					cout<<"NO"<<endl;
					break;
				}
			}
			if(j==m) cout<<"YES"<<endl;
		}
	}
	return 0;
}

