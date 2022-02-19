#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y,s,a;
	cin>>n>>x>>y;
	
	if(y%x==0){
		a=y/x;
		n-=a;
	}else{
		a=y/x;
		n-=a;
		n-=1;
	}
	if(n<0) n=0;
	cout<<n;
	return 0;
}
