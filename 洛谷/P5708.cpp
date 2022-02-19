#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	double p;
	p=(a+b+c)/2;
	printf("%.1f",sqrt(p*(p-a)*(p-b)*(p-c)));
	return 0;
}
