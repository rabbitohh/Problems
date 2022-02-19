#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a1,a2,a=2;
	cin>>a1>>a2;
	if(a1<60)
		a--;
	if(a2<60)
		a--;
	if(a!=1)
		 cout<<0;
	else
		 cout<<1;
	return 0;
}
