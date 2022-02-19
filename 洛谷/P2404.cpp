#include<bits/stdc++.h> 
using namespace std;
int step,last;
int n;
int a[100];
void dfs(int step,int last)
{
    if(last==0)
    {
    	if(step==2) return;
    	printf("%d",a[1]);
     	for(int i=2;i<step;i++)
     	{
     		printf("+%d",a[i]);
		}
		cout<<endl;
		return;
	}
	for(int i=a[step-1];i<=last;i++)
	{
		a[step]=i;
		dfs(step+1,last-i);
	}
}
int main()
{
	cin>>n;
	a[0]=1;
	dfs(1,n);
}
