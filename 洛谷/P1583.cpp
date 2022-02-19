#include<bits/stdc++.h>
using namespace std;
int E[11];
struct ac
{
	int W;
	int D;
	int C;
};
bool cmp(ac a,ac b)
{
    if(a.W!=b.W) return a.W>b.W;
    else return a.D<b.D;
}
ac ac[20001];
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=10;i++) cin>>E[i];
	for(int i=1;i<=n;i++) cin>>ac[i].W;
	for(int i=1;i<=n;i++) ac[i].D=i;
	sort(ac+1,ac+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		ac[i].C=(i-1)%10+1;
		ac[i].W+=E[ac[i].C];
	}
	sort(ac+1,ac+n+1,cmp);
	for(int i=1;i<=k;i++) cout<<ac[i].D<<' ';
	return 0;
}
