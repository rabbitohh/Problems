/*WA£¬0·Ö*/
#include<bits/stdc++.h>
using namespace std;
int a[200100];
int m[100][200010];
int main()
{
	int n,m1;
	cin>>n>>m1;
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
		m[1][i]=a[i];
	for(int i=2;i<=n;i++)
		for(int j=1;j<=log2(n);j++)
			m[i][j]=max(m[i][j-1],m[i+(1<<i)][j-1]);
	for(int i=1;i<=m1;i++)
	{
		int l,r;
		cin>>l>>r;
		int k=r-l+1;
		int ii=log2(k)+1;
		printf("%d",max(m[i][l],m[i][r-(1<<ii)]));
	}
	return 0;
} 
