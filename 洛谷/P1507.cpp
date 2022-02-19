//f[j][k]=max(f[j][k],f[j-weight[i][k-volume[i]]+calor[i])
#include<bits/stdc++.h>
using namespace std;
int wei[100086],vol[100086],f[1086][1086],cal[100086];
int main()
{	
	int maxvol,maxwei;
	cin>>maxvol>>maxwei;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>vol[i]>>wei[i]>>cal[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=maxwei;j>=wei[i];j--)
		{
			for(int k=maxvol;k>=vol[i];k--)
			{
				f[j][k]=max(f[j][k],f[j-wei[i]][k-vol[i]]+cal[i]);
			}
		}
	}
	cout<<f[maxwei][maxvol];
    return 0;
}
