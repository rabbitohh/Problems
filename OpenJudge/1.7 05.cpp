#include<bits/stdc++.h>
using namespace std;
char s[101];
char s1[101];
int main()
{
    int i,n;
    gets(s);
    n=strlen(s);
    for(i=0;i<=n;i++)
    {
    	s1[i]=s[i]+s[i+1];
	}
	s1[n-1]=s[n-1]+s[0];
	printf("%s",s1);
	return 0;
}
