#include<bits/stdc++.h>
using namespace std;
int a[15];
int main()
{
	int n;
	double q=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
    {
    	scanf("%d",&a[i]);
    	if(a[i]>70)
    	{
    		q+=((a[i]/70)+1)*0.1;
		}
		else q+=0.1;
    }
    printf("%.1f",q);
	return 0;
}
