#include<bits/stdc++.h>
using namespace std;
char a[10];
int main()
{
	double b;
	int c;
	int cnt=0;
	int fo;
	scanf("%d",&fo);
	for(int i=1;i<=fo;i++)
	{
		scanf("%s %lf %d",&a,&b,&c);
		if(c==1&&b>=37.5)
		{
			printf("%s\n",a);
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
