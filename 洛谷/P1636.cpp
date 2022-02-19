#include<cstdio>
#include<iostream>
using namespace std;
int freee[2000];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++) 
	{
		int a,b;
		cin>>a>>b;
		freee[a]++;
		freee[b]++;
	}
	int ans=0;
	for(int i=1;i<=n;i++)
		if(freee[i]%2) ans++;
	if(ans==2||ans==0) cout<<1;
	else cout<<ans/2;
	return 0;	
} 
