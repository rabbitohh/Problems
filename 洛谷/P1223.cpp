#include<bits/stdc++.h>
using namespace std;
struct ac
{
	int time;
	int id;
};
bool cmp(ac a,ac b)
{
	return a.time<b.time;
}
ac a[200000];
int main()
{
    int n;
    double sum;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		a[i].id=i;
	}
	for(int i=1;i<=n;i++)
		cin>>a[i].time;
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		int j=n-i;
		sum+=(a[i].time*j);
	}
	double ans;
	ans=double(sum)/n;
	for(int i=1;i<=n;i++)
	{
		cout<<a[i].id<<' ';
	}
	printf("\n%.2f",ans);
}
