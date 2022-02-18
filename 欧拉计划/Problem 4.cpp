#include<cstdio>
#include<iostream>
using namespace std;
int sa[7];
bool hui(int a)
{
	int idx=0;
	while(a>0)
	{
		sa[++idx]=a%10;
		a/=10;	
	}
	if(sa[1]==sa[idx]&&sa[2]==sa[idx-1]&&sa[3]==sa[idx-2])
		return 1;
	return 0;	
}
int main()
{
	int ans;
	for(int i=999;i>=100;i--)
	{
		for(int j=999;j>=100;j--)
		{
			int a=i*j;
			if(hui(a)) 
			{
				ans=max(ans,a);
				continue;
			}
		}
	}
	cout<<ans;
	return 0;
}
