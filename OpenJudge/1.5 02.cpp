#include<bits/stdc++.h>
using namespace std;
int main()
{
    double i,sum=0,a;
    for(i=1;i<=12;i++)
    {
    	cin>>a;
    	sum+=a;
	}
	sum*=1.0/12.0;
	cout<<'$'<<fixed<<setprecision(2)<<sum;
	return 0;
}
