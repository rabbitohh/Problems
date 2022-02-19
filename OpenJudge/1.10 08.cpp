#include<bits/stdc++.h>
using namespace std;
struct qwq
{
	char ID[11];
    int nianling;
};
qwq a[101];
int main()
{
	int i,n,j,k=1,k2=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%s %d",&a[i].ID,&a[i].nianling);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(a[j].nianling<a[j+1].nianling&&(a[j+1].nianling>=60||a[j].nianling>=60)) swap(a[j],a[j+1]);
	for(int i=1;i<=n;i++)
		printf("%s\n",a[i].ID);
	return 0;
}
