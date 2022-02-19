#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum=0,b,i;
    double x;
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
    	scanf("%d",&a);
    	sum+=a;
	}
	x=sum*1.0/b;
	printf("%.2f",x);
	return 0;
}
