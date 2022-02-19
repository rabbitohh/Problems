/*https://www.luogu.com.cn/problem/P1008*/
#include<bits/stdc++.h>
using namespace std;
int e[10];
int main()
{
	int a,b,c,zzz=0;
    for(int i=192;i<=789;i++)
    {
    	zzz=0;
		for(int j=1;j<=9;j++)
    	{
    		e[j]=0;
		}
    	a=i;
    	b=i*2;
    	c=i*3;
    	if(c>1000) break;
		e[a/100]=1;
		e[a/10%10]=1;
		e[a%10]=1;
		e[b/100]=1;
		e[b/10%10]=1;
		e[b%10]=1;
		e[c/100]=1;
		e[c/10%10]=1;
		e[c%10]=1;
		for(int j=1;j<=9;j++)
		{
   			if(e[j]==1)
				zzz++;
		}
		if(zzz==9)
			printf("%d %d %d\n",a,b,c);
	}
	return 0;
}
