/*WA£¨30∑÷£¨±ªbigdata∆≠¡À*/
#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
int a[300000];
int ans[300000];
int cnt=0;
int main()
{
	//freopen("fruit.in","r",stdin);
	//freopen("fruit.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	int cntt=n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	while(cntt)
	{
		//cout<<cntt<<'\n';
		int t=-1;
		int fi=-1;
		for(int i=1;i<=n;i++)
		{
			//printf("%3d",a[i]);
			if(i==n&&fi!=-1)
			{
				a[fi]=-1;
				ans[++cnt]=fi;
				cntt--;
				fi=-1;
			}
			if(a[i]==-1) continue;
			if(a[i]==t) continue;
			t=-1;
			if(fi==-1) fi=i;
			else
			{
				if(a[fi]==a[i])
				{
					t=a[i];
					a[fi]=-1;
					ans[++cnt]=fi;
					cntt--;
					fi=-1;
				}
				else
				{
					a[fi]=-1;
					ans[++cnt]=fi;
					cntt--;
					fi=i;
				}
			}
			if(i==n&&fi!=-1)
			{
				a[fi]=-1;
				ans[++cnt]=fi;
				cntt--;
				fi=-1;
			}
		}
		sort(ans+1,ans+cnt+1);
		for(int i=1;i<=cnt;i++)
		{
			cout<<ans[i]<<' ';
		}
		//if(cnt) cout<<'\n';
		cout<<'\n';
		memset(ans,0,sizeof ans);
		cnt=0;
	}
	return 0;
}
