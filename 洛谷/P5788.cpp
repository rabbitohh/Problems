/*WA£¬60·Ö*/
#include<bits/stdc++.h>
using namespace std;
int a[1000086],sub[1000086],be[1000086],val[1000086];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int top=0;
	for(int i=1;i<=n;i++)
	{
		while(top>0&&val[top]<a[i])
		{
			be[sub[top]]=i;
			top--;
		}
		top++;
		sub[top]=i;
		val[top]=a[i];
	}
	for(int i=1;i<=n;i++)
		cout<<be[i]<<' ';
	return 0;
}
