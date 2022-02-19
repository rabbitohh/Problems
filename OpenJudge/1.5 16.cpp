#include<bits/stdc++.h>
using namespace std;
int main()
{
	double fangzi=200,K;
	int cnt=0,N,sum=0,i,a_a=0;
	cin>>N>>K;
	for(i=1;i<=20;i++)
	{
		sum+=N;
		if(sum>=fangzi)
		{
			a_a=1;
			break;
		}
		fangzi=fangzi*(1+K*0.01);
	}
	if(a_a==1) cout<<i;
	else cout<<"Impossible";
	return 0;
}
