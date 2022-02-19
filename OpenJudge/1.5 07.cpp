#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c,sumj=0,sumy=0,sumt=0,sum=0,x;
    cin>>x;
    for(i=1;i<=x;i++)
    {
    	cin>>a>>b>>c;
    	sumj+=a;
    	sumy+=b;
    	sumt+=c;
	}
	sum=sumj+sumy+sumt;
	cout<<sumj<<' '<<sumy<<' '<<sumt<<' '<<sum;
	return 0;
}
