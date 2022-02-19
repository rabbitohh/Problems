#include<bits/stdc++.h>
#define ll long long
#define cao sdfmjncfadekjafcrdkjuhbnk
using namespace std;
ll x[2000];
ll y[2000];
ll z[2000];
bool vis[2000];
ll flag=1;
ll tt[2000][2000];
ll n,h,r;
void dfs(ll sdfmjncfadekjafcrdkjuhbnk)
{
	//cout<<endl<<cao<<endl;
	if(sdfmjncfadekjafcrdkjuhbnk==n+1)
	{
		cout<<"Yes"<<endl;
		flag=0;
		return;
	}
	for(ll i=0;i<=n+1;i++)
	{
		if(vis[i]==0&&tt[sdfmjncfadekjafcrdkjuhbnk][i])
		{
			vis[i]=1;
			dfs(i);
			vis[i]=0;
		} 
	}
}
int main()
{
	//freopen("cheese.in","r",stdin);
	//freopen("cheese.out","w",stdout);
	ios::sync_with_stdio(false);
	ll T;
	cin>>T;
	for(ll t=1;t<=T;t++)
	{
		cin>>n>>h>>r;
		for(ll i=1;i<=n;i++)
		{
			cin>>x[i]>>y[i]>>z[i];
		}
		if(n==1)
		{
			//cout<<z[1]+r<<' '<<z[1]-r<<endl;
			if(z[1]+r>=h&&z[1]-r<=0) cout<<"Yes";
			else cout<<"No";
		}
		else 
		{
			for(ll i=1;i<=n;i++)
			{
				if(z[i]-r<=0) tt[i][0]=1,tt[0][i]=1;
				if(z[i]+r>=h) tt[i][n+1]=1,tt[n+1][i]=1;
			} 
			for(ll i=1;i<=n;i++)
			{
				for(ll j=i+1;j<=n;j++)
				{
					if(sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]))<=r*2.0)
					{
						tt[i][j]=1;
						tt[j][1]=1;
					}
				}
			}
			//for(int i=0;i<=n+1;i++)
			//{
			//	for(int j=0;j<=n+1;j++)
			//	{
			//		cout<<tt[i][j];
			//	}
			//	cout<<endl;
			//}
			vis[0]=1;
			dfs(0);
			if(flag) cout<<"No"<<endl;
			flag=1;
			memset(tt,0,sizeof tt);
			}
		
	}
	return 0;
}
