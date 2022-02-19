#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,m,n,sum=0;
    cin>>m>>n;
    for(i=m;i<=n;i++)
	{
	if(i%17==0) sum+=i;
	}
	cout<<sum;
	return 0;
}
