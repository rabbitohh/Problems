#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	while(n>0)
	{
		if(n==1) n=0;
		else if(n%2!=0)
		{
			cout<<n;
			n=n*3+1;
			cout<<"*3+1=";
			cout<<n<<endl;
        }else{
       		cout<<n;
			n/=2;
			cout<<"/2=";
			cout<<n<<endl;
		}
        		
	}
	cout<<"End";
	return 0;
}
