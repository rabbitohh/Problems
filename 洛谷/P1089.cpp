#include<bits/stdc++.h>
using namespace std;
int a[20];
int main()
{
	int z=0;
	int mm=0;
	int qoqo=0;
	for(int i=1;i<=12;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=12;i++)
	{
		z+=300;
		z-=a[i];
		if(z<0)
		{
			printf("-%d",i);
			return 0;
		}
		qoqo=z;
		z%=100;
		qoqo-=z;
		mm+=qoqo;
	}
	printf("%d",(mm*=1.2)+z);
	return 0;
}

