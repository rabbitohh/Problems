#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct aba
{
	long long a,b;
};
aba ab[3000000];
long long mi[3000000];
bool cmp(aba x,aba y)
{
	return x.a<y.a;
}
int main()
{
	int n;
	cin>>n;
	int maxl=1;
	for(int i=1;i<=n;i++)
		cin>>ab[i].a>>ab[i].b;
	sort(ab+1,ab+n+1,cmp);
	memset(mi,0x3f,sizeof mi);
	mi[1]=ab[1].b; 
	for(int i=2;i<=n;i++)
	{
		mi[(upper_bound(mi+1,mi+maxl+1,ab[i].b)-mi)]=ab[i].b;
		if(mi[maxl+1]!=0x3f3f3f3f3f3f3f3f) maxl++;
	}
	cout<<maxl;
	return 0;
}
