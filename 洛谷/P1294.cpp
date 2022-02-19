#include<bits/stdc++.h> 
using namespace std;
int step;
int n,m;
int flag[100];
int l[100][100];
int maxx=0;
void dfs(int step,int sum)
{
    //if (step==n+1)
    {
     	if(maxx<sum) maxx=sum;
		//return;
	}
	for(int i=1;i<=n;i++)
	{
		if(!flag[i]&&l[step][i])
		{
			flag[i]=1;
			dfs(i,sum+l[step][i]);
			flag[i]=0;
		}
	}
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int q,w,e;
		cin>>q>>w>>e;
		l[q][w]=e;
		l[w][q]=e;
	}
	for(int i=1;i<=n;i++)
	{
		flag[i]=1;
		dfs(i,0);
		flag[i]=0;
	}
	cout<<maxx;
}
