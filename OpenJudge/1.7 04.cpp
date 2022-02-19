#include<bits/stdc++.h>
using namespace std;
struct qaq
{
	char b[10];
	int d;
};
qaq a[101];
qaq b[101];
int main()
{
    int n,na,nb,cnta=0,cntb=0,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	scanf("%s",a[i].b);
    	if(strcmp(a[i].b,"Rock")==0) a[i].d=0;
    	if(strcmp(a[i].b,"Scissors")==0) a[i].d=2;
		if(strcmp(a[i].b,"Paper")==0) a[i].d=5;
		scanf("%s",b[i].b);
    	if(strcmp(b[i].b,"Rock")==0) b[i].d=0;
    	if(strcmp(b[i].b,"Scissors")==0) b[i].d=2;
		if(strcmp(b[i].b,"Paper")==0) b[i].d=5;
	}	
	for(i=1;i<=n;i++)
	{
		if(a[i].d-b[i].d==-2||a[i].d-b[i].d==-3||a[i].d-b[i].d==5) printf("Player1\n");
		else if(a[i].d!=b[i].d) printf("Player2\n");
		else printf("Tie\n");
	}
	return 0;
}
