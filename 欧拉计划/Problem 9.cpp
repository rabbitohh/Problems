/*http://pe-cn.github.io/9/
https://projecteuler.net/problem=9*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	for(int a=1;a<=998;a++)
	{
		for(int b=1;b<=999-a;b++)
		{
			int c=1000-a-b;
			if(a*a+b*b==c*c) 
			{
				cout<<a*b*c;
				return 0;
			}
		}
	}
	return 0;
} 
