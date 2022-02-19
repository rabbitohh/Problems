#include<bits/stdc++.h>
using namespace std;
char a[300];
char pr[300];
int main()
{
	int i;
	gets(a);
	for(i=0;i<=300;i++)
	{
		if(a[i]=='Z') pr[i]='A';
		else if(a[i]=='z') pr[i]='a';
 		else if(a[i]>='a'&&a[i]<='y') pr[i]=a[i]+1;
		else if(a[i]>='A'&&a[i]<='Y') pr[i]=a[i]+1;
		else if(a[i]=='\0') break;
		else pr[i]=a[i];
	}
	printf("%s",pr);
	return 0;
}
