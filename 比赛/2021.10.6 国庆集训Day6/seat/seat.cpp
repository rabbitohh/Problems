#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct xyx
{
	int xy;
	int id;
};
xyx mpx[10086];
xyx mpy[10086];
bool cmp(xyx a,xyx b)
{
	return a.xy>b.xy;
}
bool cmp2(xyx a,xyx b)
{
	return a.id<b.id;
}
int main()
{
	freopen("seat.in","r",stdin);
	freopen("seat.out","w",stdout);
	ios::sync_with_stdio(false);
	int m,n,k,l,d;
	cin>>m>>n>>k>>l>>d;
	for(int i=1;i<=d;i++)
	{
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		if(y1==y2) 
			mpx[min(x1,x2)].xy++,mpx[min(x1,x2)].id=min(x1,x2);
		if(x1==x2)
			mpy[min(y1,y2)].xy++,mpy[min(y1,y2)].id=min(y1,y2);
	}
	sort(mpx+1,mpx+m+1,cmp);
	sort(mpy+1,mpy+n+1,cmp);
	sort(mpx+1,mpx+k+1,cmp2);
	sort(mpy+1,mpy+l+1,cmp2);
	for(int i=1;i<=k;i++)
		cout<<mpx[i].id<<' ';
	cout<<"\n";
	for(int i=1;i<=l;i++)
		cout<<mpy[i].id<<' ';
	return 0;
}
