#include<bits/stdc++.h>
using namespace std;
char a[210];
int main()
{
	gets(a);
	int len=strlen(a);
	for(int i=0;i<len;i++)
	{
		if(a[i]==' '&&a[i-1]==' ')
		{
			i--;
			for(int j=i;j<=len;j++)
			{
				a[j]=a[j+1];
			}
			len--;
		}
	}
	printf("%s",a);
	return 0;
}
