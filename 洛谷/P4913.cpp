#include<bits/stdc++.h>
using namespace std;
int maxx=0;
struct ac
{
	int num;
	int leftch,rightch;
};ac ac[1000000];
void dfs(int a,int b)
{
	if(a==0) return;
	maxx=max(maxx,b);
	dfs(ac[a].leftch,b+1);
	dfs(ac[a].rightch,b+1);
}
int main()
{	
	int root=1;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		ac[i].num=i;
		cin>>ac[i].leftch>>ac[i].rightch;
	}
	dfs(1,1);
	cout<<maxx;
	return 0;
}
