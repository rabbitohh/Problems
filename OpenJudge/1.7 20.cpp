#include<bits/stdc++.h>
using namespace std;
char a[40];
int main()
{
	gets(a);
	int len=strlen(a);
	if(a[len-1]=='r'&&a[len-2]=='e')
		len-=2;
	else if(a[len-1]=='y'&&a[len-2]=='l')
		len-=2;
	else if(a[len-1]=='g'&&a[len-2]=='n'&&a[len-3]=='i')
		len-=3;
	for(int i=0;i<len;i++)
		printf("%c",a[i]);
	return 0;
}
