#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,k,cnt=0,a;
	cin>>m>>k;
	a=m;
	while(m)
	{
		if(m%10==3) cnt++;
		m/=10;
	}
	if(a%19==0&&cnt==k) cout<<"YES";
	else cout<<"NO";
	return 0;
}
