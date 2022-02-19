#include<bits/stdc++.h>
using namespace std;
int e[10];
int main()
{
	int a,b,c,zzz=0;
	int aa,bb,cc;
	cin>>aa>>bb>>cc;
	int ms=0;
    for(int i=1;i<=789;i++)
    {
    	zzz=0;
		for(int j=1;j<=9;j++)
    	{
    		e[j]=0;
		}
    	a=i*aa;
    	b=i*bb;
    	c=i*cc;
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
		{
			printf("%d %d %d\n",a,b,c);
			ms++;
		}
	}
	if(ms==0) cout<<"No!!!";
	return 0;
}
