#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum=0,b,i;
    double x;
    cin>>b;
    for(i=1;i<=b;i++)
    {
    	cin>>a;
    	sum+=a;
	}
	x=sum*1.0/b;
	cout<<sum<<' ';
	cout<<fixed<<setprecision(5)<<x;
	return 0;
}
