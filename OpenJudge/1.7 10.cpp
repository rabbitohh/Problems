#include<bits/stdc++.h>
using namespace std;
char a[300];
char pr[300];
int main()
{
	int i;
	gets(a);
	for(i=0;i<=300;i++)
	{
		if(a[i]=='A') pr[i]='V';
		else if(a[i]=='B') pr[i]='W';
		else if(a[i]=='C') pr[i]='X';
		else if(a[i]=='D') pr[i]='Y';
		else if(a[i]=='E') pr[i]='Z';
		else if(a[i]=='F') pr[i]='A';
		else if(a[i]=='G') pr[i]='B';
		else if(a[i]=='H') pr[i]='C';
		else if(a[i]=='I') pr[i]='D';
		else if(a[i]=='J') pr[i]='E';
		else if(a[i]=='K') pr[i]='F';
		else if(a[i]=='L') pr[i]='G';
		else if(a[i]=='M') pr[i]='H';
		else if(a[i]=='N') pr[i]='I';
		else if(a[i]=='O') pr[i]='J';
		else if(a[i]=='P') pr[i]='K';
		else if(a[i]=='Q') pr[i]='L';
		else if(a[i]=='R') pr[i]='M';
		else if(a[i]=='S') pr[i]='N';
		else if(a[i]=='T') pr[i]='O';
		else if(a[i]=='U') pr[i]='P';
		else if(a[i]=='V') pr[i]='Q';
		else if(a[i]=='W') pr[i]='R';
		else if(a[i]=='X') pr[i]='S';
		else if(a[i]=='Y') pr[i]='T';
		else if(a[i]=='Z') pr[i]='U';
		else if(a[i]=='\0') break;
		else pr[i]=a[i];
	}
	printf("%s",pr);
	return 0;
}
