#include<cstdio>
#include<iostream>
#define ll long long
using namespace std;
ll cnt=0;
ll n,k;
void dfs(ll dep,ll sum,ll last)
{
	if(dep>k||sum>=n)
	{
		if(dep==k+1&&sum==n)
		{
			cnt++;
		}
		return;
	}
	for(ll i=last;i<=n-sum;i++)
	{
		dfs(dep+1,sum+i,i);
	}
}
int main()
{
	freopen("part.in","r",stdin);
	freopen("part.out","w",stdout);
	ios::sync_with_stdio(false);
	cin>>n>>k;
	dfs(1,0,1);//�ֵڼ����� �Ѿ�����0 
	cout<<cnt;
	return 0;
}

