#include<bits/stdc++.h>
using namespace std;
struct aa
{
	int d;
	int ans;
};
int flag[200000];
aa aa[200000];
int ud[200000];
int main()
{
	int nn,n,k;
	cin>>nn>>n>>k;
	for(int i=1;i<=nn;i++)
		cin>>ud[i];
	int h=0,t=0;
	aa[h].d=n;
	flag[n]=1;
	aa[h].ans=0;
	while(t<=h)
	{
		if(aa[h].d==k)
		{
			cout<<aa[h].ans;
			return 0;
		}
		if(flag[aa[t].d+ud[aa[t].d]]==0&&aa[t].d+ud[aa[t].d]<=200) aa[++h].d=aa[t].d+ud[aa[t].d],aa[h].ans=aa[t].ans+1,flag[aa[h].d]=1;
		if(aa[h].d==k)
		{
			cout<<aa[h].ans;
			return 0;
		}
		if(flag[aa[t].d-ud[aa[t].d]]==0&&aa[t].d-ud[aa[t].d]>=1) aa[++h].d=aa[t].d-ud[aa[t].d],aa[h].ans=aa[t].ans+1,flag[aa[h].d]=1;
		if(aa[h].d==k)
		{
			cout<<aa[h].ans;
			return 0;
		}
		t++;
	}
	cout<<-1;
	return 0;
} 
