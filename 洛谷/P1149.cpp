#include<cstdio>
#include<iostream>
using namespace std;
int num[15]={6,2,5,5,4,5,6,3,7,6};
int main()
{
	//freopen("sum.in","r",stdin);
	//freopen("sum.out","w",stdout);
	ios::sync_with_stdio(false);
	num[0]=6;
	int n;
	cin>>n;
	n-=4;
	if(n<=6)
	{
		cout<<0;
		return 0;
	}
	int ans=0;
	for(int i=0;i<=1000;i++)
	{
		for(int j=0;j<=1000;j++)
		{
			int k=i+j;
			int sum=0;
			int bf=i;
			if(bf==0) sum+=6;
			while(bf)
			{
				sum+=num[bf%10];
				bf/=10;
			}
			bf=j;
			if(bf==0) sum+=6;
			while(bf)
			{
				sum+=num[bf%10];
				bf/=10;
			}
			bf=k;
			if(bf==0) sum+=6;
			while(bf)
			{
				sum+=num[bf%10];
				bf/=10;
			}
			//cout<<i<<' '<<j<<' '<<k<<endl;
			if(sum==n)
			{
				//cout<<i<<' '<<j<<' '<<k<<' '<<sum<<endl;
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}
