/*WA£¬0·Ö*/
#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int mp[3005][3005];
int nmp[3005][3005];
int a[3005][3005];
int x[3005];
int y[3005];
int main()
{
	int n,m;
	cin>>n>>m;
	int cnt=0;
	for(int i=0;i<=(1<<m)-1;i++)
	{
		for(int j=1;j<=m;j++)
			a[i][j]=!((i>>(j-1))&1);
		cnt=i;
	}
	for(int i=1;i<=m;i++)
		cin>>x[i]>>y[i];
	int s1,t1,s2,t2;
	cin>>s1>>t1>>s2>>t2;
	int ans=0;
	for(int i=0;i<=(1<<m)-1;i++)
	{
		int ccnt=0;
		memset(mp,0,sizeof mp);
		memset(nmp,0,sizeof nmp);
		for(int j=1;j<=m;j++)
			if(a[i][j])
				mp[x[j]][y[j]]=1,ccnt++;
		nmp[1][1]=1;
		for(int j=1;j<=n;j++)
			for(int k=1;k<=n;k++)
				if(nmp[1][j]&&mp[j][k])
					nmp[1][k]=nmp[1][j]+1;
		if(nmp[1][s1]&&nmp[1][s1]-1<=t1&&nmp[1][s2]&&nmp[1][s2]-1<=t2)
			ans=max(ans,m-ccnt);
	}
	cout<<ans;
	return 0;
}
