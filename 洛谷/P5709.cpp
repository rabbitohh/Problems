#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int p;
	int cnt=0;
	if(b==0)
	{
		cout<<0;
		return 0;
	}
	for(int i=0;i<c;)//已经花费的时间 
	{
		cnt++;
		i+=b;
	}
	cout<<max(0,a-cnt);
	return 0;
}
