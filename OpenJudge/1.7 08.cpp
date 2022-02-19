#include<bits/stdc++.h>
using namespace std;
char a[31];
int main()
{
	int i;
	char x,z;
	scanf("%s %c %c",a,&x,&z);
	for(i=0;i<=300;i++)
	{
		if(a[i]==x) a[i]=z;
		else if(a[i]=='\0') break;
	}
	printf("%s",a);
	return 0;
}
