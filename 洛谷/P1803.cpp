#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct aba
{
	int a,b;	
};
bool cmp(aba x,aba y)
{
	return x.a<y.a;
}
aba ab[1000086];
int us[1000086];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>ab[i].a>>ab[i].b;
	}
	int cnt=0;
	sort(ab+1,ab+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		if(cnt==0) us[++cnt]=i;
		else if(ab[i].a<ab[us[cnt]].b)
		{
			if(ab[i].b<ab[us[cnt]].b) us[cnt]=i;	
			else continue;
		} 
		else us[++cnt]=i;
	}
	cout<<cnt<<endl;
	return 0;
}
