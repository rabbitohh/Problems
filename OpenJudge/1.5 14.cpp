#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    double x=1;
    cin>>x>>n;
    for(i=1;i<=n;i++)
		x*=1.001;
	cout<<fixed<<setprecision(4)<<x;
	return 0;
}
