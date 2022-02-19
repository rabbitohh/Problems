#include<bits/stdc++.h>
using namespace std;
int a[1000];
bool biao[1000];
int main()
{
    int n,b,cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    	scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
		for(int j=i+1;j<=n;j++)
		{
			b=a[i]+a[j];
			for(int o=1;o<=n;o++)
			{
				if(b==a[o]&&biao[o]==false)
				{
					cnt++;
					biao[o]=true;
				}
			}
		}
	}
	printf("%d",cnt);
	return 0;
}

