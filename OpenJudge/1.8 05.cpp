#include<bits/stdc++.h>
using namespace std;
int n[6][6];
int main()
{
	int x,y;
	int max=-1;
	int flag;
	int low=2147483647;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			scanf("%d",&n[i][j]);
		}
	}
	for(int i=1;i<=5;i++)
	{
  		for(int j=1;j<=5;j++)
		{
			if(n[i][j]>max)
			{
				max=n[i][j];
				x=i;
				y=j;
			}
		}
			for(int j=1;j<=5;j++)
			{
				if(n[j][y]<low)
				{
					low=n[j][y];
				} 
			}
			if(low==max)
			{
				printf("%d %d %d",x,y,max);
				return 0;
			}
			else
			{
				max=-1;
				low=2147483647;
			}
 	}

	printf("not found");
	return 0;
}
