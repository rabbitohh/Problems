#include<bits/stdc++.h>
using namespace std;
int h[1000086],v[1000086],ans[1000086],sub[1000086],be[1000086],val[1000086];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>h[i]>>v[i];
	}
	int top=0;
	for(int i=1;i<=n;i++)
	{
		while(top>0&&val[top]<h[i])
		{
			be[sub[top]]=i;
			top--;
		}
		top++;
		sub[top]=i;
		val[top]=h[i];
	}
	for(int i=1;i<=n;i++)
		ans[be[i]]+=v[i];
	//        for(int i=1;i<=n;i++) cout<<be[i]<<' ';
	top=0;
	for(int i=1;i<=1000085;i++)
	{
		be[i]=sub[i]=val[i]=0;
	}
	for(int i=n;i>=1;i--)
	{
		while(top>0&&val[top]<h[i])
		{
			be[sub[top]]=i;
			top--;
		}
		top++;
		sub[top]=i;
		val[top]=h[i];
	}
	for(int i=1;i<=n;i++)
		ans[be[i]]+=v[i];
	//		cout<<endl;
	//         for(int i=1;i<=n;i++) cout<<be[i]<<' ';
	int maxx=0;
	for(int i=1;i<=n;i++)
		maxx=max(maxx,ans[i]);
	cout<<maxx;
	return 0;
}
