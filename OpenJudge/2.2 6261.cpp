#include<bits/stdc++.h>
using namespace std;
int work(int k,int a,int b,int c)
{
	if(k==1) printf("%c->1->%c\n",a,b);
	else
	{
		work(k-1,a,c,b);
		printf("%c->%d->%c\n",a,k,b);
		work(k-1,c,b,a);
	}
}
int main()
{
	int k;
	char a,b,c;
	scanf("%d %c %c %c",&k,&a,&b,&c);
	work(k,a,b,c);
	return 0;
}
