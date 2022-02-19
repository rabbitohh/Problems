#include<bits/stdc++.h>
using namespace std;
char a[101];
int main()
{
	gets(a);
	int len=strlen(a);
	for(int i=0;i<len;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			a[i]-=(97-65);
		}
	}
	for(int i=0;i<len;i++)
		printf("%c",a[i]);
	return 0;
}
