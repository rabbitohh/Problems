#include<bits/stdc++.h> 
//#define shuai huhsdfjukhbfcvikdsjhvfkuhfe
using namespace std;
int y_y[2999999]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int ans;
bool cheak(int u)
{
	int shuai=0;
	int uu=u;
	while(uu) 
	{
		shuai=shuai*10+uu%10;
		uu/=10;
	}
	if(shuai==u) return 1;
	return 0;
}
int main()
{
	int d1,d2;
	cin>>d1>>d2;
	int n1,n2,y1,y2,rp1,rp2;
	n1=d1/10000;
	n2=d2/10000;
	y1=d1/100%100;
	y2=d2/100%100;
	rp1=d1%100;
	rp2=d2%100;
	for(int n=n1;n<=n2;n++)
	{
		for(int y=1;y<=12;y++)
		{
			if(y==1&&n==n1) y=y1;
			if(n==n2&&y>y2) break;
			int yy=(y==2&&((n%4==0&&n%100!=0)||n%400==0)?29:y_y[y]);
			//int yy;
			//if(y==2&&((n%4==0&&n%100!=0)||n%400==0)) yy=29;
			//else yy=y_y[y];
			for(int r=1;r<=yy;r++)
			{
				if(r==1&&n==n1&&y==y1) r=rp1;
				if(n==n2&&y==y2&&r>rp2) break;
				if(cheak(n*10000+y*100+r)) ans++;
			}
		}
	} 
	cout<<ans;
	return 0;
}
