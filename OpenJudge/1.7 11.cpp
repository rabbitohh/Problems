#include<bits/stdc++.h>
#include<string>
using namespace std;
string a,b,scan;
int d[200];
int cnt[200];
int main()
{
	cin>>b>>a>>scan;
	int len=b.size();
	for(int i=0;i<len;i++)
	{
		if(!d[b[i]]) d[b[i]]=a[i],cnt[a[i]]++;
		else if(d[b[i]]!=a[i])
		{
			cout<<"Failed";
			return 0;
		}
	}
	for(int i='A';i<='Z';i++)
	{
		if(!d[i]||cnt[i]!=1)
		{
			cout<<"Failed";
			return 0;
		}
	}
	len=scan.size();
	for(int i=0;i<len;i++)
	{
		scan[i]=d[scan[i]];
	}
	cout<<scan;
	return 0;
}
