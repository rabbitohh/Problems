#include<bits/stdc++.h>
using namespace std;
char b[501];
char c[501];
int main()
{
	int len,cnt=0;
	double a;
	scanf("%lf",&a);
	scanf("%s%s",b,c);
	len=strlen(b);
	for(int i=1;i<=len;i++)
	{
		if(b[i]==c[i]) cnt++;
	}
	if(cnt*1.0/len>=a) printf("yes");
	else printf("no");
	return 0;
}
