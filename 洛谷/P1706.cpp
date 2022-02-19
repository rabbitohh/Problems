#include<bits/stdc++.h> 
using namespace std;
int step,last;
int n;
int a[100];
int flag[100];
void dfs(int step)
{
    if (step==n+1)
    {
     	for(int i=1;i<=n;i++)
     	{
     		printf("%5d",a[i]);
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(!flag[i])
		{
			flag[i]=1;
			a[step]=i;
			dfs(step+1);
			flag[i]=0;
			a[step]=0;
		}
	}
    
}

int main()
{
	cin>>n;
	dfs(1);
}
