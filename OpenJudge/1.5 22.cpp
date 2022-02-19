#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,i,c=0,d=0,e=0,f=0;
	int b=0;
	for(i=1;i<=12;i++)
	{
		cin>>a;
		b+=300;
		b-=a;
		if(b<0){
			e=10234;
			cout<<'-'<<i;
			break;
		}
		c=b;
		b%=100;
		c-=b;
		d+=c;
	}
	if(e!=10234) cout<<d*1.2+b;
	return 0;
}
