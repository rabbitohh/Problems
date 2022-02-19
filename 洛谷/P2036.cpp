#include<bits/stdc++.h> 
using namespace std;
int step;
int n;
int s[100],b[100];
int minn=2147483647;
void dfs(int step,int ss,int bb)
{
	if(step==n+1)
	{
		if(ss==1&&bb==0) return;
		minn=min(minn,abs(ss-bb));
		return;
	}
	dfs(step+1,ss*s[step],bb+b[step]);
	dfs(step+1,ss,bb);
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>s[i]>>b[i];
	dfs(1,1,0);
	cout<<minn;
}
