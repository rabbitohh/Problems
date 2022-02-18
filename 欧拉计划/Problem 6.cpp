/*http://pe-cn.github.io/6/
https://projecteuler.net/problem=6*/
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int pfh=0;
	int hpf=0;
	for(int i=1;i<=100;i++)
	{
		pfh+=pow(i,2);
		hpf+=i;
	}
	hpf=pow(hpf,2);
	cout<<hpf-pfh;
	return 0;
}
