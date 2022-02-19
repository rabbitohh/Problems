#include<bits/stdc++.h>
using namespace std;
int main()
{
	/*
    能被3 5 7整除，输出3,5,7
    能被两个数整除输出两个，从小到大
    都不能，输出n
    */
    int a;
    cin>>a;
    if(a%3!=0&&a%5!=0&&a%7!=0) cout<<"n";
	if(a%3==0) cout<<"3 ";
	if(a%5==0) cout<<"5 ";
	if(a%7==0) cout<<"7 ";
	return 0;
}
