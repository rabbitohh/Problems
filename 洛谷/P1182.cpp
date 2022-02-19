#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	int cnt=0;
	int a;
	for(int i=n;i<=x;i++)
	{
		a=i;
		while(a>0)
		{
			if(a%10==2) cnt++;
			a/=10;
		}
	}
	cout<<cnt;
	return 0;
}

