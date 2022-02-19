#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c;
    char b;
    scanf("%d %c %d",&a,&b,&c);
    if(b=='+') printf("%d",a+c);
    if(b=='-') printf("%d",a-c);
    if(b=='*') printf("%d",a*c);
    if(b=='/') printf("%d",a/c);
    if(b=='%') printf("%d",a%c);
	return 0;
}
