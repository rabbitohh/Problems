#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,m,i,cnt=0,x;
    cin>>N>>m;
    for(i=1;i<=N;i++)
	{
		cin>>x;
		if(x==m) cnt++;
	}
	cout<<cnt;
	return 0;
}
