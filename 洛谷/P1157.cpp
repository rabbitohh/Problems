#include<bits/stdc++.h> 
using namespace std;
int step,last;
int n,k;
int a[100];
int flag[100];
void dfs(int step)
{
    if(step==k+1)
    {
    	for(int i=2;i<=k;i++)
    	{
    		//if(a[i]<a[i-1]) return;
		}
     	for(int i=1;i<=k;i++)
     	{
     		printf("%3d",a[i]);
		}
		cout<<endl;
		return;
	}
	for(int i=a[step-1]+1;i<=n;i++)
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
	cin>>n>>k;
	dfs(1);
}
