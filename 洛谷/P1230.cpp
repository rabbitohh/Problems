#include<bits/stdc++.h>
using namespace std;
struct awww
{
	int a;
	int w;
};
awww aw[5001];
int zy[5001];
bool cmp(awww aww,awww bww)
{
	return aww.w>bww.w;
}
int main()
{
	int m;
	int n;
	int flag=0;
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>aw[i].a;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>aw[i].w;
	}
	sort(aw+1,aw+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		flag=0;
		for(int j=aw[i].a;j>=1;j--)
		if(zy[j]==0)
		{
			zy[j]=1;
			flag=1;
			break;
		}
		if(flag==0) m-=aw[i].w;
	}
	cout<<m;
	return 0;
}

