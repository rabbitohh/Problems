#include<bits/stdc++.h>
using namespace std;
struct ac
{
	int way;
	int price;
	int starttime;
}; 
struct b
{
	int time;
	int pri;
};
b a[1000000];
int flag=0;
ac ac[1000000];
int main()
{
	int ans=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>ac[i].way>>ac[i].price>>ac[i].starttime;
   	for(int i=1;i<=n;i++)
   	{
   		if(ac[i].way==0) a[++flag].pri=ac[i].price,a[flag].time=ac[i].starttime,ans+=ac[i].price;
   		if(ac[i].way==1)
   		{
   			int x=-1;
   			for(int j=flag;j>=1;j--)
   			{
   				if(ac[i].starttime-a[j].time>45) break;
   				if(ac[i].starttime-a[j].time<=45&&ac[i].price<=a[j].pri)
				   	x=j;	
			}
			if(x==-1) ans+=ac[i].price;
			else a[x].pri=-46;
		}
	}
	cout<<ans;
	return 0;
}

