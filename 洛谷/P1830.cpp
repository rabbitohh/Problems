#include<bits/stdc++.h>
using namespace std;
struct zb
{
	int x1,y1,x2,y2;
};
struct gjd
{
	int x,y;
};
int main()
{
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	zb zb[x+10];
	gjd gjd[y];
	for(int i=1;i<=x;i++)
	{
		cin>>zb[i].x1>>zb[i].y1>>zb[i].x2>>zb[i].y2;
	}
	for(int i=1;i<=y;i++)
	{
		cin>>gjd[i].x>>gjd[i].y;
	}
	int cnt2=0;
	int cnt=0;
	int cnt3=0;
	for(int i=1;i<=y;i++)
	{
		for(int j=1;j<=x;j++)
		{
			cnt2++;
			if(gjd[i].x<=zb[j].x2&&gjd[i].y<=zb[j].y2&&gjd[i].x>=zb[j].x1&&gjd[i].y>=zb[j].y1)
			{
				cnt++;
				cnt3=cnt2;
			}
		}
		if(cnt>0) cout<<"Y "<<cnt<<' '<<cnt3<<'\n';
		else cout<<"N\n";
		cnt=cnt2=cnt3=0;
	}
	return 0;
}
