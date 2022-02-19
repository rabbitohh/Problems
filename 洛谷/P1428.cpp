#include<bits/stdc++.h>
using namespace std;
int a[101];
int main()
{
	int n,cnt;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		cnt=0;
    	for(int j=1;j<i;j++)
    	{
    		if(a[i]>a[j])
			{
				cnt++;
			} 
		}
		printf("%d ",cnt);
    }
	return 0;
}

