#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0,n,i,x,sum1=0;
    cin>>n;
    sum=(n-2)*180;
    n-=1;
    for(i=1;i<=n;i++)
	{
		cin>>x;
		sum1+=x;
	}
	sum-=sum1;
	cout<<sum;
	return 0;
}
