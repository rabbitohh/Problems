/*WA£¬40·Ö*/
#include<cstdio>
#include<iostream>
using namespace std;
int num[110000];
int col[110000];
int ans=0;
int main()
{
	//freopen("color.in","r",stdin);
	//freopen("color.out","w",stdout);
	ios::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>col[i];
	}
	int i,j;
	for(int i=1;i<=n;i++)
	{
		//cout<<i+1<<' '<<n<<endl;
		for(int j=i+1;j<=n;j++)
		{
			int z=2*j-i;
			if(z>n) break;
			if(z<=j) break;
			if(col[i]!=col[z]) continue;
			ans+=((i+z)*(num[i]+num[z]));
			ans%=10007;
		}
	}
	cout<<ans;
	return 0;
}
