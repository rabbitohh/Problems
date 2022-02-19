#include<bits/stdc++.h>
using namespace std;
int numa[1100000];
struct s
{
	int th;
	int lc,rc; 
};
s s[1000086];
int maxx=0;
int num(int a)
{
	if(numa[a]!=0) return numa[a];
	if(s[a].lc!=-1) numa[a]+=num(s[a].lc);
	if(s[a].rc!=-1) numa[a]+=num(s[a].rc);
	numa[a]+=1;
	return numa[a];
}
bool dc(int a,int b)
{
	/*if(s[a].rc==-1&&s[a].lc==-1) return 1;
	if(s[a].rc==-1||s[a].lc==-1) 
	{
		if(s[a].rc==-1) dc(s[a].lc);
		if(s[a].lc==-1) dc(s[a].rc);
		return 0;	
	}
	if(dc(s[a].lc)==0||dc(s[a].rc)==0) return 0;
	if(s[s[a].lc].th!=s[s[a].rc].th) 
	{
		dc(s[a].lc);
		dc(s[a].rc);
		return 0;
	}
	maxx=max(maxx,num(a));
	return 1;
	*/
	if(a==-1&&b==-1) return 1;
	if(a==-1||b==-1||s[a].th!=s[b].th||num(a)!=num(b)) return 0;
	if(dc(s[a].lc,s[b].rc)==1&&dc(s[a].rc,s[b].lc)==1) return 1;
	return 0;
}
void dfs(int a)
{
	if(a==-1) return;
	if(dc(s[a].rc,s[a].lc)&&num(a)>maxx)
		maxx=num(a);
	else 
		dfs(s[a].lc),dfs(s[a].rc);
	return;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>s[i].th;
	for(int i=1;i<=n;i++)
		cin>>s[i].lc>>s[i].rc;
	dfs(1);
	cout<<max(1,maxx)<<endl;
	return 0;	
} 
