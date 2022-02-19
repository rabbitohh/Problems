#include<bits/stdc++.h>
using namespace std;
char s[1000001];
int a[128];
int main()
{
	int i,j,n;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
		a[s[i]]++;
	for(i=0;i<n;i++)
	{
		if(a[s[i]]==1)
		{
			printf("%c",s[i]);
			return 0;
		}
	}
	printf("no");
	return 0;
}
