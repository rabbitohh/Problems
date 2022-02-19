#include<bits/stdc++.h>
using namespace std;
double a[101]={0,28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
double b=0;
int c=0;
int main()
{
	for(int i=1;i<=10;i++)
	{
		scanf("%d",&c);
		b+=c*1.0*a[i];
	}
 	printf("%.1f",b);
	return 0;
}
