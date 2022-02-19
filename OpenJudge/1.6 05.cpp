#include<bits/stdc++.h>
using namespace std;
int a[101];
int main()
{
	int n,cnt;
	int cnt1,cnt2,cnt3,cnt4;
	double cn1,cn2,cn3,cn4;
	cnt1=cnt2=cnt3=cnt4=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<=18) cnt1++;
		else if(a[i]>18&&a[i]<=35) cnt2++;
		else if(a[i]>35&&a[i]<=60) cnt3++;
		else cnt4++;
	}
	//cnt=cnt1+cnt2+cnt3+cnt4;
	cn1=cnt1*100.0/n;
	cn2=cnt2*100.0/n;
	cn3=cnt3*100.0/n;
	cn4=cnt4*100.0/n;
	printf("%.2f%%\n",cn1);
	printf("%.2f%%\n",cn2);
	printf("%.2f%%\n",cn3);
	printf("%.2f%%",cn4);
	return 0;
}
