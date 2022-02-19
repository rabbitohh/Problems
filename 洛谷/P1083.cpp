#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int tz[1100000];
struct sb
{
	int id;
	int d,s,t;
};
sb group[1100000];
int rea[1100000];
int qzh[1100000];
int n,m;
bool check(int num)
{
	memset(qzh,0,sizeof qzh);
	memset(rea,0,sizeof rea);
	for(int i=1;i<=num;i++)
	{
		qzh[group[i].s]+=group[i].d;
		qzh[group[i].t+1]-=group[i].d;
	}
	rea[1]=qzh[1];
	for(int i=2;i<=n;i++)
	{
		rea[i]=rea[i-1]+qzh[i];
	}
	for(int i=1;i<=n;i++)
	{
//		cout<<"n"<<' '<<n<<' ';
//		cout<<"num"<<' '<<num<<' '; 
//		cout<<"qzh"<<i<<' '<<qzh[i]<<' ';
//		cout<<"rea"<<i<<' '<<rea[i]<<endl;
		if(rea[i]>tz[i]) return 0;
	}
	return 1;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>tz[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>group[i].d>>group[i].s>>group[i].t;
		group[i].id=i;
	} 
	int l=1,r=m;
	int ans=0;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(check(mid)) 
		{
			ans=max(ans,mid);
			l=mid+1;
		}
		else r=mid-1;
	}
	//cout<<ans<<endl;
	if(ans==m) cout<<0<<endl;
	else cout<<-1<<endl<<ans+1;
	return 0;

