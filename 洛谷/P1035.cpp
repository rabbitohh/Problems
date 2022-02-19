#include<bits/stdc++.h>
using namespace std;
int main()
{
	double k,n;
	cin>>k;
	double cnt=0;
	double i=1;
	double sum;
	while(sum<=k)
	{
		cnt++;
		sum+=1/i;
		i++;
	}
	cout<<cnt;
	return 0;
}

