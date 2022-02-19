/*WA£¬0·Ö*/
#include<bits/stdc++.h>
using namespace std;
int a[100086];
int main()
{
	long long n,x,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];	
	long long sum;
	for(int i=1;i<=n;i++)
		sum+=a[i];
	int q;
	q=sum/n;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>q) a[i+1]+=(a[i]-q);
		if(a[i]<q) a[i+1]-=(q-a[i]);
		if(a[i]==q) cnt++;
	}
	cout<<(n-cnt);
    return 0;
}
