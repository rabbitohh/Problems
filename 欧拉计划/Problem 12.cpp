#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int check(int a)
{
	int cnt[10000],flag=1,sum=1;
	memset(cnt,0,sizeof cnt);
	for(int i=2;a>1;i++)
	{
		while(!(a%i))
		{
			//cout<<a<<' '<<i<<endl;
			a/=i;
			cnt[flag]++;
		}
		if(cnt[flag]) flag++;
	}
	for(int i=1;i<=flag-1;i++)
	{
		sum*=(cnt[i]+1);
	}
	return sum;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int i=1,sum=0;
	//cout<<check(55)<<endl;
	while(1)
	{
		//cout<<check(55)<<endl;
		sum+=i++;
		int ck=check(sum);
		//cout<<sum<<' '<<ck<<"\n";
		if(ck>500)
		{
			cout<<sum;
			break;
		}
		//cout<<sum<<' '<<ck<<endl;
	}
	return 0;
}

