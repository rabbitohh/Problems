#include<bits/stdc++.h>
using namespace std;
char a[101];
int main()
{
	gets(a);
	int len=strlen(a);
	int le=len/2;
	for(int i=1;i<=le;i++)
	{
//		cout<<a[i-1]<<' '<<a[len-i]<<' ';
		if(a[i-1]!=a[len-i])
		{
			printf("no");
			return 0;
		}
	}
	printf("yes");
	return 0;
}
