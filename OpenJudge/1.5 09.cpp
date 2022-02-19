#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,sum=0;
    cin>>m>>n;
    for(i=m;i<=n;i++)
    {
    	if(i%2!=0) sum+=i;
	}
	cout<<sum;
	return 0;
}
