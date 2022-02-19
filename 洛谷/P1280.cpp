/*WA£¬10·Ö*/
#include<bits/stdc++.h>
using namespace std;
int p[10086],t[10086];
int p1[10086];
int f[100086];
int main()
{
	int n;
	int k;
	cin>>n>>k;
	for(int i=1;i<=k;i++)
	{
		cin>>p[i]>>t[i];
		p1[p[i]]++;
	}
	for(int i=n;i>=1;i--)
	{
		if(p1[i]==0) f[i]=f[i+1]+1;
		else 
		for(int j=1;j<=p1[i];j++)
		{
			if(f[i+t[j]]>f[i])
  		    f[i]=max(f[i],f[i+t[j]]);
		}
		
 	}
	cout<<f[1];
	return 0;
}


