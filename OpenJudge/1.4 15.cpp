#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    if(a>b) d=a;
	else d=b;
	if(c>d) d=c;
//	d=-1;
//	if(a>d) d=a;
//	if(b>d) d=b;
//	if(c>d) d=c;
	cout<<d;
	return 0;
}
