#include<cstdio> 
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int t[11000000];
int main()
{
	memset(t,0x3f,sizeof(t));
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	{
		int bf;
		int a;
		cin>>a;
		bf=a;
		int ws=0;
		while(a)
		{
			a/=10;
			ws++;
		}
		a=bf;
		int sf=1;
		for(int i=1;i<=ws-1;i++)
		{
			sf*=10;
		}
		while(a)
		{
			t[a]=min(t[a],bf);
			a%=sf;
			sf/=10;
		}
	}
	for(int i=1;i<=q;i++)
	{
		int si,num;
		cin>>si>>num;
		if(t[num]==0x3f3f3f3f) cout<<-1<<"\n";
		else cout<<t[num]<<"\n";
	}
	
	return 0;
}
