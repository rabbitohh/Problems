#include<bits/stdc++.h>
using namespace std;
char a[101][101];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		gets(a[i]);
	}
	for(int j=1;j<=n;j++)
	{
		int len=strlen(a[j]);
		if(a[j][0]>='a'&&a[j][0]<='z')
		{
			a[j][0]-=(97-65);
		}
		for(int i=1;i<len;i++)
		{
			if(a[j][i]>='A'&&a[j][i]<='Z')
			{
				a[j][i]+=(97-65);
			}
		}
		printf("%s\n",a[j]);
	}
	return 0;
}
