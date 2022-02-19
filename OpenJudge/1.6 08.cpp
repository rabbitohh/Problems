#include<bits/stdc++.h>
using namespace std;
int a[2000];
int b[2000];
int main()
{
    int n,na,nb,cnta=0,cntb=0,i,j;
    scanf("%d%d%d",&n,&na,&nb);
    for(i=1;i<=na;i++)
    	scanf("%d",&a[i]);
	for(i=1;i<=nb;i++)
		scanf("%d",&b[i]);
	for(j=na+1;j<=n;j++)
	{
		if(j%na==0) a[j]=a[na];
		else a[j]=a[j%na];
	}
	for(j=nb+1;j<=n;j++)
	{
		if(j%nb==0) b[j]=b[nb];
		else b[j]=b[j%nb];
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]-b[i]==-2||a[i]-b[i]==-3||a[i]-b[i]==5) cnta++;
		else if(a[i]!=b[i]) cntb++;
	}
	if(cnta>cntb) printf("A");
	if(cntb>cnta) printf("B");
	if(cnta==cntb) printf("draw");
	return 0;
}
