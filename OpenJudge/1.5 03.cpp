#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,sum=0,b,i;
    double x;
    cin>>b;
    for(i=1;i<=b;i++)
    {
    	cin>>a;
    	sum+=a;
	}
	x=sum*1.0/b;
	cout<<fixed<<setprecision(4)<<x;
	return 0;
}
