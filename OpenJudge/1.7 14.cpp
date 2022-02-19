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
			cout<<a[i];
		}
		else if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]+=(97-65);
			cout<<a[i];
		}
		else
			cout<<a[i];
	}
	return 0;
}
