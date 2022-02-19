#include<bits/stdc++.h>
using namespace std;
char a[300];
char pr[300];
int main()
{
	int i;
	scanf("%s",a);
	for(i=0;i<=300;i++)
	{
		if(a[i]=='A') pr[i]='T';
		else if(a[i]=='T') pr[i]='A';
		else if(a[i]=='C') pr[i]='G';
		else if(a[i]=='G') pr[i]='C';
		else break;
	}
	printf("%s",pr);
	return 0;
}
