#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	double a1;
	cin>>a1;a=10*a1;
	double b=0.001*(a%10*1000+a%100/10*100+a%1000/100*10+a/1000);
	cout<<b; 
	return 0;
} 
