#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
int n,L,R;
bool check(int a)
{
	for(int i=0;n*i+a<=R;i++)
	{
		//cout<<a<<' '<<n*i+a<<endl;
		if(n*i+a>=L) return 1;
	}
	return 0;
}
int main()
{
	//freopen("candy.in","r",stdin);
	//freopen("candy.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>L>>R;
	int l=0,r=n-1;
	int ans=0;
	for(int i=n-1;i>=0;i--)
	{
		if(check(i))
		{
			ans=i;
			break;	
		}
	}
	cout<<ans;
	//cout<<check(230);
	return 0;
}
