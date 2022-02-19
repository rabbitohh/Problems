#include<cstdio>
#include<iostream>
using namespace std;
int per[400000];
int hey___[400000];
int sumk=0;
int AuA=1;//接下来要出海第几艘船 
struct sp
{
	int t,k;
	int l,r;//per 
};
sp ship[200000];
int main()
{
	//freopen("port.in","r",stdin);
	//freopen("port.out","w",stdout);
	int n;
	cin>>n;
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		cin>>ship[i].t>>ship[i].k;
		//cin>>ship[i].t>>ship[i].k;
		ship[i].l=sumk+1;
		for(int j=1;j<=ship[i].k;j++)
		{
			sumk++;
			cin>>per[sumk];
		}
		ship[i].r=sumk;
	}
	for(int i=1;i<=n;i++)
	{
		while(ship[i].t-ship[AuA].t>=86400)
		{
			//滚出去
			for(int j=1;j<=ship[AuA].k;j++)
			{
				hey___[per[ship[AuA].l+j-1]]--;
				if(!hey___[per[ship[AuA].l+j-1]])
					ans--;
			}
			AuA++;
		}
		//欢迎来到厨邦酱油大晒场
		for(int j=1;j<=ship[i].k;j++)
		{
			//cout<<ship[i].l+j-1<<' ';
			hey___[per[ship[i].l+j-1]]++;
			if(hey___[per[ship[i].l+j-1]]==1) 
				ans++;
		} 
		cout<<ans<<endl;
	} 
	return 0;
}
