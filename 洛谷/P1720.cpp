#include<bits/stdc++.h>
using namespace std;
long long fiba[1000000];
long long fib(int a)
{
	if(fiba[a]!=0) return fiba[a];
	if(a==1||a==2) return 1;
	fiba[a]=fib(a-1)+fib(a-2);
	return fiba[a];
}
int main()
{
	int a;
    cin>>a;
    if(a>=1) cout<<fib(a)<<".00";
    else cout<<"0.00";
	return 0;
}
