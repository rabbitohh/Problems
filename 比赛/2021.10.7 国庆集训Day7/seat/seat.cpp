#include<cstdio>
#include<iostream>
using namespace std;
int a[1000086];
int main()
{
	freopen("seat.in","r",stdin);
	freopen("seat.out","w",stdout);
	ios::sync_with_stdio(false);
	unsigned long long n,p;
	cin>>n>>p;
	cin>>a[1]>>a[2];
	//cout<<a[1]<<a[2];
	int l=-1,r=-1;
	for(int i=3;i<=n;i++)
	{
		a[i]=a[i-1]*a[i-2]%p;
		//cout<<a[i];
		for(int j=1;j<=i-2;j++)
		{
			//if(i==9&&j==3) cout<<'a';
			//cout<<a[1]<<a[25]<<' '<<a[2]<<a[26]<<endl;
			if(a[i-1]==a[j]&&a[i]==a[j+1])
			{
				l=j;
				r=i-2;
				//cout<<'a';
				break;
			}
		}
		if(l!=-1) break;
	}
	if(l==-1)
		cout<<a[n];
	else 
	{
		//cout<<"n"<<n<<endl;
		//cout<<endl<<l<<' '<<r<<endl;
		n-=(l-1);
		//cout<<"n"<<n<<endl;
		n%=(r-l+1);
		if(n==0) cout<<a[r];
		else cout<<a[l+n-1];
	}
}
