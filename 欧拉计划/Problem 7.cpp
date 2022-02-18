/*http://pe-cn.github.io/7/
https://projecteuler.net/problem=7*/
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
bool su(int a)
{
	int s=sqrt(a);
	for(int i=2;i<=s;i++)
		if(a%i==0) return 0;
	return 1;
}
int main()
{
	int cnt=0;
	for(int i=2;cnt<=10001;i++)
		if(su(i)&&++cnt==10001) cout<<i;
	return 0;
}
